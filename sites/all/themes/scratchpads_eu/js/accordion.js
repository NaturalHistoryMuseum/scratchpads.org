(function($) {
  var root;
  var collapsed_width = 0;
  var expanded_width = 0;
  var speed_out = 400;
  var speed_in = 600;
  
  /*
   * This function hides the expanded accordion, and
   * adjust it's classes
   */
  function hide_expanded(accordion) {
    $('div.accordion-empty', accordion).fadeIn(speed_in);
    $('div.accordion-background').fadeOut(speed_out);
    $('div.views-field-body', accordion).fadeOut(speed_out);
    $('div.views-field-create-spad', accordion).fadeOut(speed_out);
    
    accordion.animate({
      width: collapsed_width
    }, speed_out, function() {
      accordion.removeClass('accordion-expanded');
      accordion.addClass('accordion-collapsed');
    });    
  }
  
  /*
   * This function shows a collapsed accordion,
   * and adjust it's classes
   */
  function show_collapsed(accordion) {
    $('div.accordion-empty', accordion).fadeOut(speed_out);
    $('div.accordion-background', accordion).fadeIn(speed_in);
    $('div.views-field-body', accordion).fadeIn(speed_in);
    $('div.views-field-create-spad', accordion).fadeIn(speed_in);
    
    accordion.animate({
      width: expanded_width
    }, speed_out, function() {
      accordion.addClass('accordion-expanded');
      accordion.removeClass('accordion-collapsed');
    });    
  }
  
  /*
   * Set up the accordion functionality
   */
  function setup_accordion() {
    root = $('#block-views-nodequeue-1-block');
    
    /* Add relevant classes now */
    $('div.views-row', root).addClass('accordion-collapsed');
    $('div.views-row-last', root)
    .removeClass('accordion-collapsed')
    .removeClass('views-row-last')
    .addClass('accordion-expanded');
    
    /* Read the collapsed/expanded withs */
    collapsed_width = $('div.accordion-collapsed', root).width();
    expanded_width = $('div.accordion-expanded', root).width();

    /* Handle clicks on collapsed sections */
    $('div.accordion-collapsed', root).live('click', function() {
      hide_expanded($('div.accordion-expanded', root));
      show_collapsed($(this));
    });
    
    /* Overide link behaviour on collapsed sections to expand */
    $('div.accordion-collapsed a', root).live('click', function(e) {
      var collapsed = $(this).parents('div.accordion-collapsed');
      hide_expanded($('div.accordion-expanded', root));
      show_collapsed(collapsed);
      return false;
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