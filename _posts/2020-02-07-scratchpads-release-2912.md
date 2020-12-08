---
title: "Scratchpads release 2.9.12"
date: 2020-02-07 10:30:01
excerpt: "<p>Scratchpads version 2.9.12 has been released, and we are in the process of updating all sites to this latest version.</p>"
---

<p>This release had four developers working over a longer time period trying to fix as many outstanding bugs as possible to bring the issue queue down to a more manageable size.</p>

<p><a href="https://github.com/NaturalHistoryMuseum/scratchpads2/releases/tag/2.9.12">Scrachpads 2.9.12</a> is currently being rolled out across all sites, and is expected to be complete by noon on Tuesday. The sites are updated in alphabetical order by domain name, so those earlier in the alphabet will see their updates sooner.</p>

<p>Here&#39;s a summary of the fixes:</p>
<h2 id="localisation-internationalisation-">Localisation &amp; Internationalisation:</h2>
<ul>
<li>Move menu tabs to the right for RTL languages (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6091">#6091</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Float logo right for RTL (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6097">#6097</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Check for terms in current language in ecoint module (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6119">#6119</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Correctly detect language for slickgrid fields (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6126">#6126</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
</ul>
<h2 id="ui-ux-accessibility-">UI, UX &amp; Accessibility:</h2>
<ul>
<li>Prevent the media select box opening prematurely (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6099">#6099</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Disable autocomplete for search when &quot;all&quot; selected (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6100">#6100</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Patch the biblio&#39;s crossref importer to only include certain tags in titles (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6077">#6077</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Captalise the &quot;Add terms&quot; taxonomy operation (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6096">#6096</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Use htmlspecialchars to make title xml safe (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6103">#6103</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Check that anon users have access to node before generating &#39;cite me&#39; (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6102">#6102</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Add margins around lexicon links (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6105">#6105</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Decode html chars when displaying node titles on taxon pages (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6106">#6106</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Return an error when autocompleting taxons without a vocabulary (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6114">#6114</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Remove duplicates from species media view (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6129">#6129</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Move stripy-div-group border to table cells (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6128">#6128</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Add &#39;alpha&#39; class to ecoint block to match other blocks (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6125">#6125</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
<li>Set the max_input_vars in php.ini (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6120">#6120</a> - <a href="https://github.com/alycejenni">@alycejenni</a>)</li>
</ul>
<h2 id="maps-">Maps:</h2>
<ul>
<li>Add satelite map &amp; localized language map (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6093">#6093</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Add option to disable map clusters (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6092">#6092</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Show uncertainty of records on map (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6113">#6113</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
</ul>
<h2 id="import-export-interoperability-">Import, Export &amp; Interoperability:</h2>
<ul>
<li>Add php soap dependency to apache Dockerfile (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6083">#6083</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Allow DOIs to be imported using the URL as well as the short form (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6082">#6082</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Fix pubmed imports (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6081">#6081</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Ignore empty strings in URL column on import (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6075">#6075</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Add an import operation to the taxonomy admin view (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6095">#6095</a> - <a href="https://github.com/jrdh">@jrdh</a>)</li>
<li>Fix GBIF registrations (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6110">#6110</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Notify GBIF on change to archive (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6111">#6111</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
<li>Update BHL to api v3 (<a href="https://github.com/NaturalHistoryMuseum/scratchpads2/pull/6117">#6117</a> - <a href="https://github.com/PaulKiddle">@PaulKiddle</a>)</li>
</ul>
