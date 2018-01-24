const childProcess = require("child_process");
const http = require("http");
const path = require("path");
const pa11y = require("pa11y");
const htmlReporter = require("pa11y/reporter/html");
const glob = require("glob-promise");

const jekyll = childProcess.spawn("npm", ["start"]);

jekyll.stdout.pipe(process.stdout);
jekyll.stderr.pipe(process.stderr);

jekyll.stdout.on("data", async buffer => {
  const [url] = String(buffer).match(/http:\/\/[0-9.:]+/) || "";

  if (url) {
    const paths = await glob("**/*.html", {
      cwd: path.resolve(process.cwd(), "_site")
    });

    const tester = pa11y({
      ignore: [
        "notice",
        "warning",
        "WCAG2AA.Principle1.Guideline1_4.1_4_3.G18.Fail",
        "WCAG2AA.Principle1.Guideline1_4.1_4_3.G145.Fail"
      ]
    });

    console.log(`Testing ${paths.length} pages...`);

    const results = [];
    const errors = [];

    for (const path of paths) {
      results.push(
        ...(await new Promise((resolve, reject) =>
          tester.run(url + "/" + path, (error, results) => {
            if (error) {
              errors.push(error);

              return resolve([]);
            }

            resolve(
              results.map(r => ({ ...r, message: path + ": " + r.message }))
            );
          })
        ))
      );
    }

    errors.forEach(e => {
      console.log(e.message);
    });

    jekyll.stdout.unpipe(process.stdout);
    jekyll.stderr.unpipe(process.stderr);

    jekyll.kill();

    const html = htmlReporter.process(results, url);

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
