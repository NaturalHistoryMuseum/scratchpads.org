---
menu: 'Support'
weight: 3
sidebar: 'Introduction'
---

# Support

{% assign wiki = site.html_pages | where_exp: "page", "page.url == 
'/support/help-wiki'" | map: "redirect_to" | first  %}
{% assign tracker = site.html_pages | where_exp: "page", "page.url == '/support/issues-queue'" | map: "redirect_to" | first  %}

  In order to facilitate the use of Scratchpads among users we make use of a diverse set of support tools.

**Our goal is to be able to provide support through multiple channels.** To that end we have implemented a diverse set of tools that includes: Training courses, Issues tracker, Documentation pages as well as an extensive network of ambassadors worldwide that you can contact.

-    To participate in one of our Scratchpads training courses or if you would like to make a suggestion for a new one please go to [Training](/support/training) section
-    To report a Scratchpad bug you spotted or to suggest a new feature to be implemented please use our dedicated [Issues queue]({{ tracker }})
-    To find documentation on features and detailed procedures please visit our dedicated [Help Wiki]({{ wiki }})
-    To find answers to the most frequently asked questions about Scratchpads click on [FAQ](/about/faq)
-    To experiment with Scratchpads features please use the [Sandbox](/support/sandbox). You can also apply for your own training site following the [corresponding link](/support/training) on the left
-    If you are preparing a project proposal that will include the Scratchpads infrastructure please consult our [Project proposals](/support/grants) section

