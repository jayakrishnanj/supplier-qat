CONTENTS OF THIS FILE
---------------------

 * Introduction
 * Installation
 * Configuration


INTRODUCTION
------------

Current Maintainer: Viswanath Polaki <polaki_2005@yahoo.com>

Ctanywhere module helps site admin to find and replace text anywhere in the
drupal site. This avoids many form alters for text changes and also helps
site admins to change text at places where developers find difficult to
alter the texts.

Site admin must add a url, text to find in the url and text to replace values
in the admin section. This module then finds and replaces text at the
particular url.

For example: If site admin adds user/login in the url field, "User account"
in the text to find field, "Login" in the text to replace field then this
module will replace "User account" text with "Login" text in user/login page.

By the help of this module lot of time can be saved in site building and there
will be fewer form alters and lesser php code to get the desired look and feel.


INSTALLATION
------------

* Install as you would normally install a contributed Drupal module. See:
   https://drupal.org/documentation/install/modules-themes/modules-7
   for further information.


CONFIGURATION
-------------
Site admins can see the list of settings via admin panel
For viewing change text settings navigate to 
URL: <yourdomain.com>/admin/ctanywhere
