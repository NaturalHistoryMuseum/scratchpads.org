(function($) {
  /*
   * Ensure that 'join the comunity' and 'case studies' have the same height
   */
  function same_height_jc_cs() {
    var jc = $('#block-menu-menu-join-the-community');
    var cs = $('#block-views-case-studies-slideshow-block-1');
    var jc_oh = jc.outerHeight();
    var cs_oh = cs.outerHeight();

    if (jc_oh > cs_oh) {
      cs.height(cs.height() + jc_oh - cs_oh);
    } else {
      jc.height(jc.height() + cs_oh - jc_oh);
    }
  }
  
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
      same_height_jc_cs();
      same_height_rl();
    }
  });
})(jQuery);