(function($) {
  var small_adjust = 20;
  var large_adjust = 42;

  var sidebar = null;
  var sidebar_image_height = 447; // All images have the same height
  var sidebar_height = 0;
  var content_height = 0;
  
  /*
   * Ensure the side bar image is always at the bottom of the viewport.
   */
  function keep_sidebar_image_visible() {
    sidebar = $('#region-sidebar-first div.region-inner');
    sidebar_height = sidebar.height() + small_adjust;
    
    var images = new Array(
      "curly-plant-202px.png",
      "dragonfly-202px.png",
      "fern-202px.png",
      "fish-202px.png",
      "flesh-202px.png",
      "grass-202px.png",
      "jellyfish-202px.png",
      "lizard-202px.png",
      "ocean-thingy-202px.png",
      "octopus-202px.png",
      "shrimp-202px.png",
      "spider-202px.png",
      "weevil-202px.png",
      "worm-202px.png"
    );
    
    // Select a random background image
    var random_image = images[Math.floor(Math.random() * images.length)];
    var image_src = sidebar.css('background-image').replace(/"|url\(|\)$/ig, "").replace(/\/[^\/]+$/, '/' + random_image);

    // Apply the image and register callback
    sidebar.css('background', '#FFF url(' + image_src + ') no-repeat 0 100%');
    
    $(window).bind('scroll resize', move_sidebar_image);
    move_sidebar_image();     
    
    
    /* We could use this if needed to get the image height on the fly.
    // Load the image, get it's height and apply it
    var img = new Image;
    img.onload = function() {
      sidebar_image_height = img.height;
      
      sidebar.css('background', '#FFF url(' + image_src + ') no-repeat 0 100%');
      
      $(window).bind('scroll resize', move_sidebar_image);
      move_sidebar_image();     
    };
    img.src = image_src;
    */    
  }
  
  /*
   * Callback (called initialy and on scroll/resize) to adjust the size
   * of the sidebar as required.
   */
  function move_sidebar_image() {
    var sidebar_pos = sidebar.offset();
    var viewport_height = $(window).height();
    var scroll_top = $(window).scrollTop();
    content_height = $('#region-content').height();

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