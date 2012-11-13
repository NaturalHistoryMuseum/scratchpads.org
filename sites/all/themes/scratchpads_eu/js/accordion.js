(function($) {
  var root;
  var collapsed_width = 0;
  var expanded_width = 0;
  var speed_out = 400;
  var speed_in = 600;
  var title_mode = 'fade'; // fade, scale or none
  var title_ratio = 3;
  var animation_lock = 0;
  
  /*
   * This function hides the expanded accordion, and
   * adjust it's classes
   */
  function hide_expanded(accordion) {
    $('div.accordion-empty', accordion).fadeIn(speed_in);
    $('div.accordion-background').fadeOut(speed_out);
    $('div.views-field-body', accordion).fadeOut(speed_out);
    $('div.views-field-create-spad', accordion).fadeOut(speed_out);
    
    if (title_mode == 'scale') {
      $('div.views-field-title a', accordion).animate({
        fontSize: '16px',
        marginLeft: '0px',
        paddingTop: '0px'
      }, speed_out/3);
    } else if (title_mode == 'fade') {
      $('div.views-field-title span.accordion-title-large', accordion).css('z-index', 1).animate({
        opacity: 0
      }, speed_out/title_ratio);
      $('div.views-field-title span.accordion-title-small', accordion)
      .css('opacity', 0).css('display', 'block').css('z-index', 2).animate({
        opacity: 1
      }, speed_in);
    }
    
    accordion.animate({
      width: collapsed_width
    }, speed_out, function() {
      accordion.removeClass('accordion-expanded');
      accordion.addClass('accordion-collapsed');
      animation_lock--;
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
    
    if (title_mode == 'scale') {
      $('div.views-field-title a', accordion).delay(speed_out*(1-1/title_ratio)).animate({
        fontSize: '24px',
        marginLeft: '10px',
        paddingTop: '6px'
      }, speed_out/title_ratio);
    } else if (title_mode == 'fade') {
      $('div.views-field-title span.accordion-title-large', accordion).css('z-index', 2)
      .css('opacity', 0).css('display', 'block').delay(speed_in/title_ratio)
      .animate({
        opacity: 1
      }, speed_in*(1-1/title_ratio));
      $('div.views-field-title span.accordion-title-small', accordion).css('z-index', 1)
      .delay(speed_out/title_ratio)
      .animate({
        opacity:0
      }, speed_out*(1-1/title_ratio));
    }
    
    accordion.animate({
      width: expanded_width
    }, speed_out, function() {
      accordion.addClass('accordion-expanded');
      accordion.removeClass('accordion-collapsed');
      animation_lock--;
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

    /* Prepare title modes */
    if (title_mode == 'none') {
      $('div.accordion-expanded div.views-field-title a')
      .css('font-size', '16px')
      .css('margin-left', '0')
      .css('padding-top', 0);
    } else {
      $('div.views-row div.views-field-title', root).addClass('accordion-variable');
      
      if (title_mode == 'fade') {
        $('div.views-row div.views-field-title', root).each(function() {
          $(this).css('position', 'relative');
          $('span', $(this))
            .css('display', 'block')
            .css('position', 'absolute')
            .css('top', 0).css('left', 0)
            .addClass('accordion-title-small')
            .clone().removeClass('accordion-title-small').addClass('accordion-title-large').appendTo($(this));
        });
      
        $('div.views-row.accordion-collapsed div.views-field-title span.accordion-title-large', root).hide();
        $('div.views-row.accordion-expanded div.views-field-title span.accordion-title-small', root).hide();
      }
    }
    
    /* Handle clicks on collapsed sections */
    $('div.accordion-collapsed', root).live('click', function() {
      if (animation_lock <= 0) {
        animation_lock = 2;
        hide_expanded($('div.accordion-expanded', root));
        show_collapsed($(this));
      }
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