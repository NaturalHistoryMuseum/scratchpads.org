CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Requirements
 * Installation
 * Permissions
 * Usage

INTRODUCTION
------------

Current Maintainers:

 * ZenDoodles http://drupal.org/user/226976
 * cweagans http://drupal.org/user/404732
 * Devin Carlson http://drupal.org/user/290182

Twitter Block is a lightweight module which provides a configurable block to
display tweets from a given user, hashtag or search term.

Twitter Block will never provide advanced Twitter integration such as OAuth
user authentication or the ability to tweet from Drupal. These capabilities are
provided by other modules such as Twitter (http://drupal.org/project/twitter).

REQUIREMENTS
------------

Twitter Block has one dependency.

Drupal core modules
 * Block

INSTALLATION
------------

Twitter Block can be installed via the standard Drupal installation process
(http://drupal.org/documentation/install/modules-themes/modules-7).

PERMISSIONS
------------

Twitter Block provides one permission:

 * Administer Twitter Blocks
    Allows a user to configure Twitter Block settings.

USAGE
-----

Twitter Block provides a block which will determine where tweets are displayed.

Administrators can visit the Blocks administration page where they can position
the Twitter Block and configure its options. The Twitter Block has a number of
options, including:

 * A username to retrieve tweets from or a string to search Twitter for.
 * The type of twitters to return.
 * The language to filter the returned tweets by.
 * The total number of tweets to display.
