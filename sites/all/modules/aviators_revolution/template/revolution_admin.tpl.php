<div>
  <div class="fullwidthbanner-container">
    <div class="fullwidthbanner">
      <div id="<?php print $wrapper; ?>">
        <ul class="unstyled">
          <li>
            <?php if(isset($image)): ?>
              <?php print $image; ?>
            <?php endif; ?>

            <?php if (isset($components) && is_array($components)): ?>
              <?php foreach ($components as $component): ?>
                <div fullwidthcentering="on" <?php print drupal_attributes($component['attributes']); ?>>
                  <?php print drupal_render($component['component']); ?>
                </div>
              <?php endforeach; ?>
            <?php endif; ?>
          </li>
        </ul>
      </div>
    </div>
  </div>
</div>
