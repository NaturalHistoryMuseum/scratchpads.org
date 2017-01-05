<div class="fullwidthbanner-container">
  <div class="fullwidthbanner">
    <div id=<?php print $wrapper; ?>>
      <?php if(isset($slides) && is_array($slides)): ?>
        <ul>
          <?php foreach ($slides as $slide): ?>

            <li class="slide" <?php isset($slide['attributes']) ? print drupal_attributes($slide['attributes']) : ''; ?>>
              <?php print $slide['slide']; ?>
            </li>
          <?php endforeach; ?>
        </ul>
      <?php endif; ?>
    </div>
  </div>
</div>