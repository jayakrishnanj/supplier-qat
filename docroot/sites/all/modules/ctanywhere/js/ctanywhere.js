(function ($) {
  'use strict';
  Drupal.behaviors.ctanywhere = {
    attach: function (context, settings) {
      if ('ctj' in Drupal.settings.ctanywhere) {
        for (var key in Drupal.settings.ctanywhere.ctj) {
          if (Drupal.settings.ctanywhere.ctj.hasOwnProperty(key)) {
            $('body').html($('body').html().replace(new RegExp(key, 'g'), Drupal.settings.ctanywhere.ctj[key]));

          }
        }
      }
    }
  };

})(jQuery);
