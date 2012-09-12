(function($) {
  // We use document.ready rather than behaviours as we only want
  // this to run once.
  $(document).ready(function() {
	// Ensure sidebar-first is at least the height of the viewport
	var sidebar = $('#region-sidebar-first div.region-inner');
    var sidebar_pos = sidebar.offset();
    var sidebar_size = {width: sidebar.width(), height: sidebar.height()};
    var viewport_size = {width: $(window).width(), height: $(window).height()};
    if (sidebar_pos.top + sidebar_size.height < viewport_size.height) {
      //sidebar.css('min-height', viewport_size.height - sidebar_pos.top - 32);
      sidebar.find('div.menu-block-wrapper > ul.menu, ul.facetapi-facetapi-links').css('min-height',
    	  viewport_size.height - sidebar_pos.top - 42);
    }
    
  });
})(jQuery);