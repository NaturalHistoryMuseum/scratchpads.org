# Scratchpads.org

This is the code repository for the Scratchpads online promotional brochure site.

The repository name was formerly scratchpads.eu which reflected the domain address of the site. Since the UK leaving the EU/Brexit, this UK-hosted site has necessarily had to change its gTLD domain name ending from .eu to .org.

For consistency this repo has been updated to be inline with the https://scratchpads.org/ web address URL.

There is an issue to ensure that any future code update deployments from this repository continue to be successful under its new name: https://github.com/NaturalHistoryMuseum/scratchpads.org/issues/23

This is a Jekyll/Github-pages project.

## Requirements & Set-up

1. Check whether you have Ruby 2.1.0 or higher installed:
   ```bash
   ruby --version
   ```
2. If you don't have Ruby installed, [install Ruby 2.1.0 or higher](https://www.ruby-lang.org/en/downloads/).
3. Install bundler:
   ```bash
   gem install bundler
   ```
4. Install dependencies:
   ```bash
   bundle install
   ```

You can now build the site:

```bash
bundle exec jekyll serve
```

### Optional: Node & npm

To run tests you'll need Node.js version 8.0.0 or higher installed:

```bash
node --version
```

You can install Node from the [official site](https://nodejs.org/en/) or through [NVM](https://github.com/creationix/nvm),
the node version manager.

You can now use npm to start or test the site:

```bash
npm start

npm test
```

## Adding pages & resources

### Updating site list

The site list data is collected by the [scratchpads usage](https://github.com/NaturalHistoryMuseum/scratchpads-usage) project. Copy the sites-list json into _data/sites.json - don't
forget to update the _data/stats.json with the collection date.

### Blog posts

To add a new blog post/news item, add a markdown file to the _posts directory, with a date and a filename.

All posts should have front matter with a title property. The other items are optional:

title
: The title of the article
date
: The date it was published in YYYY-MM-DD format (defaults to date from filename)
excerpt
: The snippet to display in index listings (defaults to first paragraph of post)

### Pages

Add a markdown or HTML file to wherever you want. All front matter is optional:

title
: The title of the page. In `.md` files this defaults to the first top-level heading
weight
: What order the page should appear in on the sidebar menu
css
: The public url of any additional stylesheets to include
theme
: What colour scheme should be used? Defaults to first url segment. One of news, home, about, explore, develop, support.
sidebar
: The text to display in the sidebar entry. Defaults to page title

### Ambassadors

Add a new markdown file to `_ambassadors`. See the other ambassador files for example.

### Case studies

Add a new entry to `_data/case-studies.yaml`.

### Events

Add a new markdown file to `_events` directory.

### Resources

Add a new markdown file to `_resources` directory. Add `ambassadors` and/or `training` to the tags list for
the resource to appear in the relevant collection page.

### Team

Sorry, you'll have to create a new image map.

### Sidebar image

Just dump an image in `assets/sidebar`.
