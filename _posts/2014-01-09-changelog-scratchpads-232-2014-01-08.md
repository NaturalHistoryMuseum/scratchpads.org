---
title: "Changelog - Scratchpads 2.3.2 (2014-01-08)"
date: 2014-01-09 11:27:25
---

<strong>Release Changelog
Scratchpads 2.3.2 (2014-01-08)</strong>

- Allow exporting of all references from a search, rather than just the first 100 (<a href="http://support.scratchpads.eu/issues/1420">#1420</a>)
- Batch the export of specimens to CSV/XML from the Slickgrid table (<a href="http://support.scratchpads.eu/issues/3769">#3769</a>)
- Add a user and node reference (GUID) column to import templates (<a href="http://support.scratchpads.eu/issues/3755">#3755</a>, <a href="http://support.scratchpads.eu/issues/2487">#2487</a>)
- Ensure that GUIDs in imports are GUIDs, and not IDs for a specific import (<a href="http://support.scratchpads.eu/issues/3731">#3731</a>)
- Prevent user 2 from being redirected to the setup work-flow when editing other users
- Clean up the user/%uid/edit/%profile form pages
- Enable subscribing of users to newsletters (<a href="http://support.scratchpads.eu/issues/3750">#3750</a>)
- Ensure that creation of Biblio nodes using a DOI works as expected (<a href="http://support.scratchpads.eu/issues/3764">#3764</a>)
- Allow setting of whether content in a group is public or private, and a general tidy of group permissions (<a href="http://support.scratchpads.eu/issues/3721">#3721</a>)
- Ensure that terms can always be toggled in Tinytax
- Load Tinytax dynamically, and cache the data in Varnish
- Moved CC images to our own mirror which can be cached by Varnish (actually quicker than CC's own server)
- Fix the autocomplete for associating a user with a biblio author (<a href="http://support.scratchpads.eu/issues/2954">#2954</a>)
- Allow twitter feeds on the front page of a site, and hide the users' twitter settings page (<a href="http://support.scratchpads.eu/issues/3711">#3711</a>)
- Tweaked the default sort order for Slickgrid views (<a href="http://support.scratchpads.eu/issues/3199">#3199</a>)
- If T&Cs have been tweaked, link to them, otherwise link to the default scratchpads.eu page
- Enable adding of media by URL as well as file upload (<a href="http://support.scratchpads.eu/issues/867">#867</a>)
- Advise users that deleting a gallery does not delete the images in it (<a href="http://support.scratchpads.eu/issues/1099">#1099</a>)
- Add a description to the Media field (<a href="http://support.scratchpads.eu/issues/1104">#1104</a>)
- Allow filtering of the users pages (<a href="http://support.scratchpads.eu/issues/3724">#3724</a>)
- Remove the confusing HTML option for newsletters (it is not supported) (<a href="http://support.scratchpads.eu/issues/3701">#3701</a>)
