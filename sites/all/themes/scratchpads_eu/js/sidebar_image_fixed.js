(function($) {
  var small_adjust = 20;
  var large_adjust = 42;

  var sidebar = null;
  var sidebar_image_height = 0;
  var sidebar_height = 0;
  var content_height = 0;
  
  /*
   * Ensure the side bar image is always at the bottom of the viewport.
   */
  function keep_sidebar_image_visible() {
    sidebar = $('#region-sidebar-first div.region-inner');
    sidebar_height = sidebar.height() + small_adjust;
    content_height = $('#region-content').height();
    
    // Get the background image height
    var img = new Image;
    img.onload = function() {
      sidebar_image_height = img.height;

      $(window).bind('scroll resize', move_sidebar_image);
      move_sidebar_image();     
    };

    img.src = sidebar.css('background-image').replace(/"|url\(|\)$/ig, "");
  }
  
  /*
   * Callback (called initialy and on scroll/resize) to adjust the size
   * of the sidebar as required.
   */
  function move_sidebar_image() {
    var sidebar_pos = sidebar.offset();
    var viewport_height = $(window).height();
    var scroll_top = $(window).scrollTop();

    var final_height = viewport_height - sidebar_pos.top - large_adjust + scroll_top;
    
    if (content_height + sidebar_pos.top > viewport_height) {
      // If content is higher than viewport, ensure we never go over content
      if (final_height > content_height - large_adjust) {
        final_height = content_height - large_adjust;
      }
    } else if (final_height > viewport_height - sidebar_pos.top - large_adjust) {
       // Otherwise (if viewport is higher than content), ensure we never go over 
       // initial viewport      
      final_height = viewport_height - sidebar_pos.top - large_adjust;
    }
    
    // Ensure it never goes over the menu
    if (final_height - sidebar_image_height < sidebar_height) {
      final_height = sidebar_height + sidebar_image_height;
    } 
    
    sidebar.css('min-height', final_height);
  }
  
  /*
   * We use document.ready rather than behaviours as we only want
   * to run this once.
   */ 
  $(document).ready(function() {
    if ($('#region-sidebar-first').length > 0) {
      keep_sidebar_image_visible();        
    }
  });
})(jQuery);