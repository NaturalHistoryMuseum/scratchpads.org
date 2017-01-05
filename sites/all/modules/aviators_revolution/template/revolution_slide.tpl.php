<?php


?>

<?php if(isset($image)): ?>
  <?php print $image; ?>
<?php endif; ?>

<?php if(isset($components) && is_array($components)): ?>
  <?php foreach ($components as $component): ?>
    <?php print $component; ?>
  <?php endforeach; ?>
<?php endif; ?>

