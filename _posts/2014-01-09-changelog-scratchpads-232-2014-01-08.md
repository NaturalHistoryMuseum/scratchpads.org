---
title: "Changelog - Scratchpads 2.3.2 (2014-01-08)"
date: 2014-01-09 11:27:00
---

Release Changelog

Scratchpads 2.3.2 (2014-01-08)
- Allow exporting of all references from a search, rather than just the first 100 (#1420)
- Batch the export of specimens to CSV/XML from the Slickgrid table (#3769)
- Add a user and node reference (GUID) column to import templates (#3755, #2487)
- Ensure that GUIDs in imports are GUIDs, and not IDs for a specific import (#3731)
- Prevent user 2 from being redirected to the setup work-flow when editing other users
- Clean up the user/%uid/edit/%profile form pages
- Enable subscribing of users to newsletters (#3750)
- Ensure that creation of Biblio nodes using a DOI works as expected (#3764)
- Allow setting of whether content in a group is public or private, and a general tidy of group permissions (#3721)
- Ensure that terms can always be toggled in Tinytax
- Load Tinytax dynamically, and cache the data in Varnish
- Moved CC images to our own mirror which can be cached by Varnish (actually quicker than CC's own server)
- Fix the autocomplete for associating a user with a biblio author (#2954)
- Allow twitter feeds on the front page of a site, and hide the users' twitter settings page (#3711)
- Tweaked the default sort order for Slickgrid views (#3199)
- If T&Cs have been tweaked, link to them, otherwise link to the default scratchpads.eu page
- Enable adding of media by URL as well as file upload (#867)
- Advise users that deleting a gallery does not delete the images in it (#1099)
- Add a description to the Media field (#1104)
- Allow filtering of the users pages (#3724)
- Remove the confusing HTML option for newsletters (it is not supported) (#3701)

