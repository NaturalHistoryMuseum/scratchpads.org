(function($) {
  /*
   * Ensure that both left and right column are same height.
   */
  function same_height_rl() {
    var lheight = $('#region-home-left div.region-home-left-inner').height();
    $('#region-home-right div.region-home-right-inner').css('min-height', lheight + "px");
  }
  
  /*
   * We use document.ready rather than behaviours as we only want
   * to run this once.
   */ 
  $(document).ready(function() {
    if ($('body').hasClass('context-home')) {
      same_height_rl();
    }
  });
})(jQuery);