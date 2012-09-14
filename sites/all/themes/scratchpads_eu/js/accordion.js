(function($) {
  var root;
  
  function setup_accordion() {
    root = $('#block-views-nodequeue-1-block');
    
    /* Add relevant classes now */
    $('div.views-row', root).addClass('accordion-collapsed');
    $('div.views-row-last', root)
    .removeClass('accordion-collapsed')
    .removeClass('views-row-last')
    .addClass('accordion-expanded');

    $('div.accordion-collapsed', root).live('click', function(e) {
      /*
      $('div.accordion-expanded', root)
      .removeClass('accordion-expanded')
      .addClass('accordion-collapsed');
      
      $(this)
      .removeClass('accordion-collapsed')
      .addClass('accordion-expanded');
      */

      /* Hide the expanded */
      $('div.accordion-expanded div.accordion-empty').fadeIn('fast');
      $('div.accordion-expanded div.accordion-background').fadeOut('fast');
      $('div.accordion-expanded div.views-field-body').fadeOut('fast');
      $('div.accordion-expanded div.views-field-view-node').fadeOut('fast');
      
      $('div.accordion-expanded', root).animate({
        width: 150
      }, 'fast', function() {
        $(this).removeClass('accordion-expanded')
        $(this).addClass('accordion-collapsed');
      });

      /* Show the collapsed */
      $(this).find('div.accordion-empty').fadeOut('fast');
      $(this).find('div.accordion-background').fadeIn('fast');
      $(this).find('div.views-field-body').fadeIn('fast');
      $(this).find('div.views-field-view-node').fadeIn('fast');
      
      $(this).animate({
        width: 400
      }, 'fast', function() {
        $(this).addClass('accordion-expanded')
        $(this).removeClass('accordion-collapsed');
      });
    });
  }
  
  /*
   * We use document.ready rather than behaviors as we want
   * this to run only on page load
   */
  
  $(document).ready(function() {
    if ($('body').hasClass('context-home')) {
      setup_accordion();
    }
  });
})(jQuery);