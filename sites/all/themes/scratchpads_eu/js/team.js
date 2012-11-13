(function($){
  var maps = new Array();
  var root = null;
  var image_container = null;
  var content_container = null;
  var rows = null;
  var path_to_source = null;
  var map = null;
  
  // Parse the output on the page to get the user IDs
  function extract_users() {
    $('#block-system-main div.view div.views-row div.views-field-name').each(function() {
      var classes = $(this).attr('class').split(' ');
      for (var i = 0; i < classes.length; i++) {
        if (/^user-\d+$/.test(classes[i])) {
          maps.push({
            user_id: classes[i],
            row: $(this).parent('div.views-row')
          });
        }
      }
    });
  }
  
  function setup_imagemap() {
    // Settings
    root = $('#block-system-main');
    image_container = $('#team-image');
    content_container = $('div.view-content', root);
    rows = $('#block-system-main div.view div.views-row');
    path_to_source = $('img', image_container).attr('src').replace(/\/[^\/]+$/, '');
    console.log('path to source:' + path_to_source);
    
    // Extract the user list from the view results
    extract_users();
    
    // Prepare for layout
    image_container.css('position', 'relative');
    $('img', image_container)
    .clone().appendTo(image_container)
    .css('opacity', 0)
    .css('position', 'absolute')
    .css('top', 0)
    .css('left', 0)
    .css('z-index', 2)
    .attr('usemap', '#teammap');
 
    $('#block-system-main div.view-content')
    .css('position', 'relative')
    .css('height', '300px');
    
    rows.css('opacity', 0).css('display', 'none').css('position', 'absolute').css('top', 0);
    
    map = $('<map name="teammap" id="teammap"></map>').appendTo(image_container);
    
    // Load the images and image maps
    for (var i = 0; i < maps.length; i++) {
      // Load the map, and set the hover function
      $.ajax({
        url: path_to_source + '/' + maps[i].user_id + '.map',
        map_info: maps[i],
        success: function(data) {
          console.log("loaded " + this.map_info.user_id);
          var area = $(data).find('area').appendTo(map);
          
          area.removeAttr('nohref').attr('href', '/').click(function(e){ 
            return false;
          });
          
          
          var local_map_info = this.map_info;
          area.hover(function() {
            $('#image-' + local_map_info.user_id).stop(true).animate({
              opacity: 1
            });
          }, function() {
            if (!local_map_info.row.hasClass('team-visible')) {
              $('#image-' + local_map_info.user_id).stop(true).animate({
                opacity: 0
              });
            } else {
              $('#image-' + local_map_info.user_id).addClass('area-team-visible');
            }
          });
          
          area.click(function() {
            if (!local_map_info.row.hasClass('team-visible')) {
              rows.filter('.team-visible').removeClass('team-visible').stop(true)
              .animate({
                opacity:0
              }, function() {
                  $(this).css('display', 'none');
              });
              $('.area-team-visible').removeClass('area-team-visible').animate({opacity:0});

              local_map_info.row
              .addClass('team-visible')
              .stop(true)
              .css('display', 'block')
              .animate({opacity:1});
            }
          });
        }
      });
      
      // Insert the image
      $('<img id="image-' + maps[i].user_id + '" src="' + path_to_source + '/' + maps[i].user_id + '.png' + '" />')
      .appendTo(image_container)
      .css('position', 'absolute')
      .css('top', 0).css('left', 0)
      .css('z-index', 1)
      .css('opacity', 0);
    }
  }
  
  /*
   * We use $(document).ready rather than behaviours as we only
   * want this to run on page load
   */
  $(document).ready(function() {
    if ($('body').hasClass('page-about-team')) {
      setup_imagemap();
    }
  });
})(jQuery);