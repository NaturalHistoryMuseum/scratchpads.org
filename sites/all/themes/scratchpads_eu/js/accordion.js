(function($) {
  var root;
  
  function setup_accordion() {
    root = $('#block-views-nodequeue-1-block');
    
    $('div.views-row', root).addClass('accordion-collapsed');
    $('div.views-row-last', root)
    .removeClass('accordion-collapsed')
    .addClass('accordion-expanded');
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