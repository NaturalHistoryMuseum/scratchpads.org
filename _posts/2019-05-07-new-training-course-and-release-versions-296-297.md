---
title: "New training course and release of versions 2.9.6 & 2.9.7"
date: 2019-05-07 14:17:28
---

<p>
It's been a busy few months for the Scratchpad team.  Today, we completed the deployment of Scratchpads version 2.9.7 to all sites.  This was the culmination of the first six-week sprint from Ginger, who implemented the following bug fixes and features in this release:
</p>
<ul type="disc">
    <li>
        Fixed overlapping borders in tables (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5863">#5863</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Search submits after clicking an autocomplete suggestion (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5869">#5869</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Stopped the upload button jumping around (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5871">#5871</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Fixed image display issues on species pages slideshows (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5873">#5873</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Allow blocks to be added to main content (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5876">#5876</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        "Other" added to gender options in biographies (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5879">#5879</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Hide Auto label from Admin&gt;Structure (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5880">#5880</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        View recently opened/closed issues from sidebar (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5887">#5887</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Italics tags allowed in biblio titles again (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5898">#5898</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Display terms in a fallback language if not defined in current language
        (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5905">#5905</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Autotag's "fields to populate" drop-down items (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5906">#5906</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Fixed AJAX error in contact form when Antibot enabled (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5907">#5907</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Fixed CSS issues with custom non-view blocks (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5909">#5909</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Titles for custom blocks now display (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/5910">#5910</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)
    </li>
    <li>
        Crossbrowser maps fix (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5904">#5904</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
</ul>
<p>
If you've been watching the Scratchpads Github repository you may have noticed a flurry of activity in the issue queue - and it may appear that we now have more bugs than we started with at the beginning of the sprint. This is just because we've been going through some of the issues we imported over from our old support site and reclassifying or closing them as necessary. Nearly 200 issues have been closed in the past six weeks! We've also tidied up the labels a little, and added some automation to help us keep the queue cleaner in future.
</p>
<p>
Prior to this was Ben Scott's turn at the Scratchpads helm, with the following fixes included in the 2.9.6 release:
</p>
<ul type="disc">
    <li>
Replace Google-based maps (gm3 module) (        <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)
    </li>
    <li>
        Character handling in Literature (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5831">#5831</a>, <a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5803">#5803</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Greek letters (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5769">#5769</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Large file uploads (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5763">#5763</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Performance issues (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5743">#5743</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Private groups context indexing (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5699">#5699</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Spam user registration (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5687">#5687</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Scratchpads classification service (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5674">#5674</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Taxonomy tree widget (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5657">#5657</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
Docker SOLR replace image (        <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        EOL services access
        <a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5688">#5688</a>
        (<a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Scratchpad sandbox offline (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5824">#5824</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        Scratchpads.eu stats (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5689">#5689</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
    <li>
        PHP 7.1 Docker (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/issues/5808">#5808</a> - <a href="https://github.com/benscott">@benscott</a>)
    </li>
</ul>
<p>
Alongside this work, we have completely updated the Scratchpads online documentation - <a href="https://scratchpads.readthedocs.io">https://scratchpads.readthedocs.io</a>, and taught our first Scratchpad training course for over two years, at the Facultad de Agronomía in Montevideo, Uruguay. We hope this is the first of many training courses, and if you would find it useful for the Scratchpad team to teach at your institution please do <a href="mailto:scratchpads@nhm.ac.uk">get in touch</a>.
</p>
