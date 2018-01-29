---
title: "Changelog - Scratchpads 2.4.1 (2014-04-03)"
date: 2014-04-14 12:51:00
---

Release Changelog

Scratchpads 2.4.1 (2014-04-03)
- Delete temporary files older than one month to free up valuable disk space
- Ensure description fields on files are imported as Filtered HTML, rather than plain text (#4076)
- Allow importing from CSV files (#4058)
- Display the GID of a group on the group edit page, and allow importing into a group (#4065)
- Repatched feeds_alter() to ensure alter functions happen in the correct order.
- Only display author names with references associated in facet autocomplete search box (#4057)
- Ensure menu tabs are correctly translated (#4063)
- Correctly import dates from Excel (no longer need to ensure that text is correctly formatted)
- Added Bigmenu as a tool (#3383)
- Allow access to the advanced help popup (#4044)
- Ensure the nomenclature block displays as expected (#3890)
- Prevent the editing of some views by users
- Delete entries from the feeds_item table with blank GUIDs (#4020,#4022)
- Export boolean values (#4004)
- Ensure the emonocot citation block is not cached (#4008)
- Some minor code fixes

