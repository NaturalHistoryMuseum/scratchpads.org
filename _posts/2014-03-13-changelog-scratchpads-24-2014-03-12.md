---
title: "Changelog - Scratchpads 2.4 (2014-03-12)"
date: 2014-03-13 16:49:00
---

Release Changelog

Scratchpads 2.4 (2014-03-12)
- Enable the use of a private file system (#909)
- Ensure taxonomy terms are available to search for the anonymous user (#3919)
- Add roles and permissions to Groups (#3961)
- Fix e-monocot portal feedback (#3465)
- Hide WCM ID field from nomenclature block (#2885)
- Fix and improve Slickgrid (#3992,#3899,#3896,#3713,#3231,#1317)
- Reduce the number of PHP errors, and log errors to syslog rather than the DB
- Ensure the entityconnectpreview module is enabled (#1297)
- Fix an issue on e-monocot sites that could prevent the synonyms tab from being displayed
- Enable a user to request a full site backup from Aegir (#2830)
- Enable bulk assigning of users to groups (#3443)
- Fix an issue on some migrated sites that prevents editing of user reference fields (#3430)
- Sort Solr search pages by creation date descending (#3963)
- Prevent orphaned terms appearing in autocomplete boxes (#3933)
- Prevent a Feeds template error (#3960)
- Possibly fix importing large numbers of terms from WoRMS (#3932)
- Flag up inactive Scratchpads, and mail users if they've never logged in
- Improve performance of the taxonomy formatter (#3080)
- Prevent the taxonomy editor from orphaning terms (#1436)
- Allow deletion of multiple terms in the taxonomy editor (#2900)
- Aggregate data on taxon pages (#2461)
- Sort fields in the Excel templates (#1977)
- Increase the sensitivity when dragging terms in the taxonomy editor (#2289)
- No longer use a jQuery CDN
- Delete EOL temp files (#3888)
- Fix an issue with the Biblio export links (#3889)
- Prevent taxon page headers from being displayed full div height (#3891)
- Display only relevant type specimens in the nomenclature block (#3714)
- Link images to their file entity to enable the popup (#3864)
- Prevent all images being resized then "narrow" version of the front page (#3866)
- Hide Group roles and permissions (#3865)
- Hide Vernacular name label if no values are present (#3772)
- Enable the "Remember me" feature if logging in via OpenID
- Upgraded Drupal to 7.26
- Export key files in DwC-A (#2295)
- Sort galleries by weight (#2992)
- Remember the status of the tinytax toggle checkbox between pages (#2343)
- Ensure validation is performed on import (#2208)
- Tag images attached to specimens (#3372)
- Add default weights for all images (#3396)
- Allow certain fields to be added/removed from additional entity/bundles (#3178)
- Renamed Moneran to Bacteria/Archaea
- Removed the CAPTCHA After, Mollom and Boost modules
- Display authors when searching by taxonomy (#3790)
- Attempt to export more than 65534 records (#3776)
- Ensure distribution and habitat changes can be saved (#3503)
- Ensure tabs in the Specimens Slickgrid can be switched between (#3747)
- Allow the Tinytax block to be hidden for anonymous users (#3773)

