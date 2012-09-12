(function($) {
  var fudge = 42;
  var sidebar_image_height = 0;
  var sidebar_height = 0;
  
  function move_sidebar_image() {
    var sidebar = $('#region-sidebar-first div.region-inner');
    var sidebar_pos = sidebar.offset();
    var viewport_height = $(window).height();

    var final_height = viewport_height - sidebar_pos.top - fudge;
    if (final_height - sidebar_image_height < sidebar_height) {
      final_height = sidebar_height + sidebar_image_height;
    }
    sidebar.find('div.menu-block-wrapper > ul.menu').css('min-height', final_height);
  }
  
  function keep_sidebar_image_visible() {
    var sidebar = $('#region-sidebar-first div.region-inner');
    sidebar_height = sidebar.height();
    
    // Get the background image height
    var img = new Image;
    img.onload = function() {
      sidebar_image_height = img.height;
        
      $(window).bind('scroll resize', move_sidebar_image);
      move_sidebar_image();    	
    };
    
    img.src = sidebar.find('div.menu-block-wrapper > ul.menu').css('background-image').replace(/"|url\(|\)$/ig, "");
  }
	
  // We use document.ready rather than behaviours as we only want
  // this to run once.
  $(document).ready(function() {
    keep_sidebar_image_visible();        
  });
})(jQuery);