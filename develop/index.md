---
parent: '/develop/hosting'
weight: 1
---

Extending Scratchpads
=====================

The Scratchpad project is fully open source. If you're interested in assisting with the development of the Scratchpads, or you'd like to add some functionality, then download the code for local development and testing. All of our code currently resides on our own [Git server](/develop/repository), and we also have our own development site for development and testing of [Drupal modules](http://drupal.org/developing/modules).  
Submitted modules have to be thoroughly tested for compatibility before being released on any Scratchpad server, which is the responsibility of the local server manager.

The quickest and easiest way of setting up a Scratchpads development environment, is to use [Vagrant](https://www.vagrantup.com/). Assuming you have Vagrant installed, the following should setup an [Aegir](http://www.aegirproject.org/) instance with all of the correct settings. A new platform and site will be added to the Aegir instance.  

```bash
$ git clone https://github.com/NaturalHistoryMuseum/scratchpads2.git  
$ cd scratchpads2  
$ cp vagrant/Vagrantfile.full-install Vagrantfile  
$ vagrant up
```

This will take quite a white to run - up to 60 minutes. Once it completes, you will see some output like the text below.  

```
==> default: Login to the Aegir interface:  
==> default: http://xxx.xxx.xxx.xxx/  
==> default: Username: admin  
==> default: Password: vagrant
```

You will need to add an entry to your hosts file (or dnsmasq/bind9/named configuration) for the new site that has been created ([http://scratchpads.vagrant](http://scratchpads.vagrant)) so that the new site can be viewed in your browser.  
`xxx.xxx.xxx.xxx scratchpads.vagrant`  
Once that has been done, try visiting the URL [http://scratchpads.vagrant/](http://scratchpads.vagrant/) and logging in with the login details "username" and "password".  
Note, port 80 on the Vagrant VM is forwarded to port 8888 on your local machine. This means that you can use [Vagrant Share](https://docs.vagrantup.com/v2/share/index.html) to allow access to a site hosted on the VM, although note you will need to add an alias for the URL provided by the vagrant share command.  

```bash
$ vagrant login  
$ vagrant share
```

We also have a [Chef repository](https://github.com/NaturalHistoryMuseum/scratchpads2-chef) which can be used to create a stable production ready server setup. The Chef configuration requires a minimum of four servers, although this can be tweaked to only require one (this is down to you to do).