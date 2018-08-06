<?php

/**
 * @file
 * Default theme implementation for displaying a tweet.
 *
 * A list of tweets are displayed inside of the twitter block.
 *
 * Available variables:
 * - $user_name: The screen name of the tweet's author.
 * - $user_image: A URL to the tweet's author's profile picture.
 * - $text: The tweet's text.
 */
?>
<div class="clearfix tweet twitter_block">
  <img src="<?php echo $user_image; ?>" alt="Twitter Avatar" />
  <?php /*
  <div class="twitter_user_name">
    <a href="http://twitter.com/<?php echo $user_name; ?>">
      <?php echo $user_name; ?>
    </a>
  </div>
   */ ?>  
  <div class="twitter_text"><p><?php echo $text; ?></p></div>
</div>
