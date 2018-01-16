---
parent: '/'
menu: Develop
sidebar: Hosting
weight: 4
---

Hosting Scratchpads
===================

Unmanaged Scratchpads server
----------------------------

This is the most flexible way of hosting your own Scratchpads system. There is no mimimum requirements for the hardware, and no strict rules for the software ([Debian](http://www.debian.org/)/[Windows](http://windows.microsoft.com/)/[OSX](http://www.apple.com/osx/), [Apache](http://httpd.apache.org/)/[nginx](http://nginx.org/)/[IIS](http://www.iis.net/), etc). We offer only the barest minimum of support for hosting a Scratchpads system, so it is a good idea that you, or your sysadmin, is very familiar with [PHP](http://www.php.net/)/[Drupal](http://drupal.org/), [MySQL](http://dev.mysql.com/) and is able to configure [Tomcat](http://tomcat.apache.org/)/[Solr](http://lucene.apache.org/solr/). Recommended system requirements for a Scratchpads system are:

*   [Ubuntu 12.04](http://www.ubuntu.com/)
*   Apache 2.2  
    Simplest setup is to configure apache with "AllowOverride All".
*   PHP 5.3  
    Increase the memory_limit to a value of atleast 128M
*   MySQL 5.5
*   Tomcat 6
*   Solr 1.4  
    Configuration files are included in the Scratchpads repository (Base/sites/all/modules/contrib/apachesolr/solr-conf)

Managed Scratchpads server
--------------------------

If you would like to host Scratchpads on your institutional servers, and make your resources available to us, then please get in touch.

We would request that applicants have a server with a minimum spec of 4 × CPU cores, and 16GB of Ram. You should also be willing to give us full root access to the server so that we can get our installation of [Aegir](http://www.aegirproject.org/) talking to your server.

The server should be opened to the world on port 80, and be accessible from quartz.nhm.ac.uk on port 22.

The server should use Debian or Ubuntu, purely to keep things simple for us. If you would like to use a different OS, then please let us know, and we'll check that everything is compatible (We currently have 2 × Debian servers, and 1 × [Centos](http://www.centos.org/) server being managed by our Aegir instance).