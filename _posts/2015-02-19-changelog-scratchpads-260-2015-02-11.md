---
title: "Changelog - Scratchpads 2.6.0 (2015-02-11)"
date: 2015-02-19 17:01:52
---

<strong>Release Changelog
Scratchpads 2.6.0 (2015-02-11)</strong>

- Updated the EXIF Custom module enabling it for all Scratchpads (<a href="http://support.scratchpads.eu/issues/4176">#4176</a>)
- Created a simple Entity filter (<a href="http://support.scratchpads.eu/issues/4219">#4219</a>)
- Greatly improved the translation functionality of Scratchapds (<a href="http://support.scratchpads.eu/issues/2317">#2317</a>)

- Upgraded Drupal to 7.34
- Enable any block to be embedded on the front page (<a href="http://support.scratchpads.eu/issues/1174">#1174</a>)
- Hide simplenews settings
- Updated GBIF maps to their new API (v1)
- Ensure the dblog module is always disabled
- Removed called to feeds_alter() which required a patched version of feeds
- Ensure "0" values are correctly exported (<a href="http://support.scratchpads.eu/issues/4004">#4004</a>)
- Present images in rows, rather than a single column (<a href="http://support.scratchpads.eu/issues/4297">#4297</a>)
- Ensure tinytax options take immediate effect (<a href="http://support.scratchpads.eu/issues/4305">#4305</a>)
- Ensure media views aren't cached to ensure newly uploaded files are visible in the media library tab
- Improved and cleaned up the tag/autotag modules, and enabled tag with tips
- Added a reference field to the lexicon term output (<a href="http://support.scratchpads.eu/issues/3001">#3001</a>)
- Allow the citethispage list of authors to be tweaked. (<a href="http://support.scratchpads.eu/issues/3920">#3920</a>)
- Added the format option to the WYSIWYG editor (<a href="http://support.scratchpads.eu/issues/1000">#1000</a>)
- Hide all media with a weight of 100 from ALL media gallery pages. (<a href="http://support.scratchpads.eu/issues/4013">#4013</a>)
- Don't display empty stripy divs (<a href="http://support.scratchpads.eu/issues/4296">#4296</a>)
- Allow a user to specify a list of terms that should always be displayed in a tinytax tree. Fixes (<a href="http://support.scratchpads.eu/issues/4305">#4305</a>)
- Reset to alphabetical button added to TUI (<a href="http://support.scratchpads.eu/issues/4274">#4274</a>)
- Added the ability for a user to clear their site's cache. (<a href="http://support.scratchpads.eu/issues/4300">#4300</a>)
- Don't automatically enable the CKEditor SCAYT (Spell Check As You Type) feature. (<a href="http://support.scratchpads.eu/issues/4302">#4302</a>)
- Front page views should use the summary if available. (<a href="http://support.scratchpads.eu/issues/4284">#4284</a>)
- Prevent population of Media (URL) field in Excel templates (<a href="http://support.scratchpads.eu/issues/4265">#4265</a>)
- Upgraded the mediaelement library and module (<a href="http://support.scratchpads.eu/issues/4263">#4263</a>)
- Ensure a Slickgrid row can be updated multiple times without waiting for caches to clear (<a href="http://support.scratchpads.eu/issues/4254">#4254</a>)
- Removed calls to eval() to improve overall security
- Display only 50 results on a Biblio page
- Tweaked the ShareThis widget settings to improve performance
- Merged code from various development branches (yet to be fully released)
