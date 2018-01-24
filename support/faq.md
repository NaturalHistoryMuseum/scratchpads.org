---
sidebar: FAQ
weight: 3
---

Frequently Asked Questions
==========================

{% assign wiki = site.html_pages | where_exp: "page", "page.url == '/support/help-wiki'" | map: "redirect_to" | first  %}

1.  [What are Scratchpads?](#what-are-scratchpads)
2.  [Who uses Scratchpads?](#who-uses-scratchpads)
3.  [How are Scratchpads funded?](#how-are-scratchpads-funded)
4.  [What is the technology behind Scratchpads?](#what-is-the-technology-behind-scratchpads)
5.  [Is there a user manual for Scratchpads?](#is-there-a-user-manual-for-scratchpads)
6.  [I am a developer. Can I help?](#i-am-a-developer-can-i-help)
7.  [Can I contribute in spreading the word about Scratchpads?](#can-i-contribute-in-spreading-the-word-about-scratchpads)
8.  [How can I apply for a new Scratchpad?](#how-can-i-apply-for-a-new-scratchpad)
9.  [Can I apply for a new site on behalf of someone else?](#can-i-apply-for-a-new-site-on-behalf-of-someone-else)
10.  [Can I test Scratchpads before I apply for a new site?](#can-i-test-scratchpads-before-i-apply-for-a-new-site)
11.  [Can I join an existing Scratchpad site?](#can-i-join-an-existing-scratchpad-site)
12.  [Do Scratchpads take credit for data in my site?](#do-scratchpads-take-credit-for-data-in-my-site)
13.  [I have applied for and created my new Scratchpad site. Now what?](#i-have-applied-for-and-created-my-new-scratchpad-site-now-what)

## What are Scratchpads?
Scratchpads are an easy-to-use social networking application that enables communities of researchers to manage, share and publish taxonomic and biodiversity data online. They provide the infrastructure for creating and sustaining virtual research communities. Sites can be hosted anywhere running [a Scratchpads server](/develop). Many sites are hosted at the [Natural History Museum London](http://www.nhm.ac.uk), and offered free to any researcher. More information of the concept behind Scratchpads can be found [here](/about/concept).  
[Back to top](#main)

## Who uses Scratchpads?
Scratchpads users include societies, journals, experienced and early stage researchers, students and unpaid experts. Any individual or group with an interest in natural history is eligible for a site and you do not have to have an academic affiliation, or any professional qualification. All you need is time, some information you would like to share and a little experience using the web. The best way to start is to explore the current sites and see what [other users are doing](../explore/sites-list).  
[Back to top](#main)

## How are Scratchpads funded?
Scratchpads were created in the EU Network of Excellence [EDIT](http://www.e-taxonomy.eu) that ran from 2006 - 2010. Currently funding is primarily through the [ViBRANT](http://www.vbrant.eu) project (2010 - 2013), a European Commission grant under [Framework Seven](http://cordis.europa.eu/fp7/home_en.html). We are also receiving funds through the [Natural Environment Research Council](http://www.nerc.ac.uk/) funded [e-monocot](http://www.e-monocot.org) project, in partnership with the [Royal Botanic Gardens Kew](http://www.kew.org) and the [University of Oxford](http://www.ox.ac.uk/). The [Natural History Museum](http://www.nhm.ac.uk) (NHM), London also contributes staff time to the project and is committed to supporting Scratchpads after 2013. Further funds to support the Scratchpads have been provided by the [Global Biodiversity Information Facility](http://www.gbif.org) (GBIF) and from core funding within the NHM. Finally we are working with [Biodiversity Informatics Group](http://eol.org/info/234) (BIG) of the [Encyclopedia of Life project](http://www.eol.org).  
Ultimately the longevity of the Scratchpads will be dependent upon whether they remain useful and actively used. Without community support for infrastructure and content, the Scratchpads project will be short lived. Every indication is that the Scratchpads' popularity will make the project as secure as any informatics project in the foreseeable future.  
[Back to top](#main)

## What is the technology behind Scratchpads?
The Scratchpads are built on the open source Content Management System [Drupal](http://www.drupal.org). Drupal, with its large library of contributed modules, enables features such as blogs, collaborative authoring, forums, peer-to-peer networking, newsletters, picture galleries, file uploads and downloads etc..  
The Scratchpads project is about customising Drupal's basic functionality to make it better suited and easier to use by the natural history community. We do this by developing specific modules that support specific biological data types (e.g. biological specimens), templates for the import and export of data (e.g. taxonomic classifications), and by making web services of other data readily accessible (e.g. Biodiversity Heritage Library, NCBI Genbank, GBIF). The Scratchpads project also hosts the content contributed to individual sites, making is easier to establish a rich web presence that is supported and built by a community of users.  
[Back to top](#main)

## Is there a user manual for Scratchpads?
Scratchpads (much like taxonomy) are being updated and upgraded constantly to meet users’ demands to manage and connect biodiversity data. To address these changes we have adopted an easily adjustable system of documenting Scratchpads functionality through our [dedicated wiki page]({{ wiki }}). Wikis can easily be updated to reflect latest updates. If you feel more confident with a printed manual of Scratchpads, you can generate and download one through the wiki pages.  
[Back to top](#main)

## I am a developer. Can I help?
Yes! Perhaps the simplest thing you can do is switch to using [Drupal](http://www.drupal.org) for your biodiversity informatics projects. This is the Content Management System (CMS) in which Scratchpads are written (see [What is the technology behind Scratchpads?](#what-is-the-technology-behind-scratchpads)). It’s free, open-source (distributed under the GNU General Public License), maintained and developed by a community of thousands of users and developers. This wide user base makes the Scratchpads project much more sustainable than developing purpose-built CMS applications for bespoke needs.  
Drupal forms the underlying architecture on which the Scratchpads modules, templates and web services sit. By switching to Drupal you can make use of these tools as well and adapt them to your purposes. Anyone with PHP and MySQL experience will pick up Drupal development quickly, and there are some excellent books available to guide you through this process. For some specific Scratchpads resources:

*   take a look at the complete list of the modules we use on the Scratchpads;
*   alternatively take a look at our [GIT repository](../develop/repository) to access the full Scratchpads code base.

With a few exceptions (notably the way Drupal handles taxonomy) we have not altered the core Drupal code. If you are interested in developing modules for the Scratchpads project, download a copy of our code and create a local [development server](../develop).  
[Back to top](#main)

## Can I contribute in spreading the word about Scratchpads?
Yes. Spreading the word about Scratchpads and its use in the taxonomic and biodiversity community is very important to the sustainability of the entire project. Scratchpads are maintaining an [Ambassador program](../support/ambassadors) for new or existing users that would like to contribute to our outreach program.  
[Back to top](#main)

## How can I apply for a new Scratchpad?
You can apply for a new Scratchpad by submitting the [online application form](http://get.scratchpads.eu). After submitting the form you will receive an e-mail with directions on how to access and set up your new site. We recommend following the [on-line training material]({{ wiki }}) and exploring the [sandbox test site](../support/sandbox) before starting to populate your own new site.  
[Back to top](#main)

## Can I apply for a new site on behalf of someone else?
You can apply on behalf of a scientific society or research group, provided you have secured a legally valid approval from your society or group. Site applicants are referred to as the site maintainers. Maintainers assume responsibility for the site's additional users and content. New users can be invited to join by the site maintainer and are assigned different roles (editor, contributor and authenticated user) that dictate the level of access to site content and functions. In practice the best sites usually have at least two maintainers, at least one of whom has some experience with web development, as site maintainers keep control of all aspect of the site’s look and functionality. With a little experience the Scratchpads are very easy to use. This will take some time initially, especially for those with little or no experience of building content on the web.  
[Back to top](#main)

## Can I test Scratchpads before I apply for a new site?
Yes. You can try out all of Scratchpads functionality through our dedicated [sandbox site](http://sandbox.scratchpads.eu). Feel free to experiment with this site and test it exhaustively. It will be re-created every 6 hours, so you can't break it for long! On the other hand, please do not upload valuable data to the sandbox site because all content will be permanently erased when its re-created. If you intent to do extensive testing and you need a testing site for several days please apply for your own training site through our [application form](../support/training/apply-for-site). Training sites will be deleted after 2 weeks from the date created.  
[Back to top](#main)

## Can I join an existing Scratchpad site?
Yes. In fact most of our active users are part of larger communities of contributors and not maintainers. You are actually encouraged to [find a community](../explore/sites-list) that reflects your interests and apply to join. Please note that you can apply to join an existing site and contribute to the community through the site's webpage and not through the Scratchpads.eu site. Each site's maintainer is responsible for reviewing and accept your application.  
[Back to top](#main)

## Do Scratchpads take credit for data in my site?
No. Scratchpads will not take any credit for any of the data you put in your site. In fact the sites can be customised by maintainers so that the Scratchpads logo is shown only in the footer of pages along with the Drupal logo. Arguably the Scratchpads brand invisibility has been fundamental to the Scratchpads success. The only restriction, in the frame of our open data philosophy, is that you apply a [creative commons licence](http://www.creativecommons.org/) for your site. By default this should be CC-BY and we recommend that you think very carefully about any more restrictive licence.  
[Back to top](#main)

## I have applied for and created my new Scratchpad site. Now what?
Congratulations! You are now ready to start structuring your site and put content in. You can follow our basic training guide, search for documentation on specific topics or watch some of our how-to videos available in our dedicated [help wiki site]({[ wiki ]}). If cannot find out how to do a specific task please ask for support through our [issues queue site](http://dev.scratchpads.eu).  
[Back to top](#main)
