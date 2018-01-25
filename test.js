const childProcess = require("child_process");
const http = require("http");
const path = require("path");
const readline = require("readline")
const pa11y = require("pa11y");
const htmlReporter = require("pa11y-reporter-html");
const glob = require("glob-promise");

const jekyll = childProcess.spawn("npm", ["start"]);

jekyll.stdout.pipe(process.stdout);
jekyll.stderr.pipe(process.stderr);

let inLoop = false;
let breakLoop = false;
let cancel;
const cancellation = new Promise((resolve, reject) => {
  cancel = reject;
})

process.on('SIGINT', () => {
  jekyll.kill();

  if(inLoop) {
    readline.clearLine(process.stdout);
    cancel({ message: 'Tests killed' });
    breakLoop = true;
  } else {
    process.exit();
  }
})

jekyll.stdout.on("data", async buffer => {
  const [url] = String(buffer).match(/http:\/\/[0-9.:]+/) || "";

  if (url) {
    jekyll.stdout.unpipe(process.stdout);
    const paths = await glob("**/*.html", {
      cwd: path.resolve(process.cwd(), "_site")
    });

    const options = ({
      ignore: [
        "notice",
        "warning",
        "WCAG2AA.Principle1.Guideline1_4.1_4_3.G18.Fail",
        "WCAG2AA.Principle1.Guideline1_4.1_4_3.G145.Fail",
        // Redirect pages don't have title elements but I don't care
        "WCAG2AA.Principle2.Guideline2_4.2_4_2.H25.1.NoTitleEl",
        // Twitter generates a frame with no title
        "WCAG2AA.Principle2.Guideline2_4.2_4_1.H64.1"
      ]
    });

    console.log(`Testing ${paths.length} pages...`);

    const results = [];
    const errors = [];

    inLoop = true;

    for (const ix in paths) {
      const path = paths[ix];
      process.stdout.write(`${ix}/${paths.length} ${path}`);
      readline.clearLine(process.stdout, 1)
      readline.cursorTo(process.stdout, 0);

      try {
        const { issues } = await Promise.race([pa11y(url + "/" + encodeURI(path), options), cancellation]);

        results.push(...issues)
      } catch (error) {
        errors.push(error);
      }

      if(breakLoop) {
        break;
      }
    }

    inLoop = false;

    errors.forEach(e => {
      console.log(e.message);
    });

    jekyll.stdout.unpipe(process.stdout);
    jekyll.stderr.unpipe(process.stderr);

    jekyll.kill();

    if (results.length === 0) {
      console.log('All executed tests passed!')
      process.exit();
    }

    console.log(`${results.length} issues found`);

    const html = await htmlReporter.results({ documentTitle: 'Scratchpads', pageUrl: url, issues: results });

    const server = http.createServer(function(req, res) {
      res.end(html);

      server.close();
    });

    server.listen(() => {
      const { port, family, address } = server.address();

      const url = `http://${family === "IPv4" ? address : `[${address}]`}:${
        port
      }`;

      console.log("Report generated, available at ", url);
    });
  }
});
