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
  <div class="twitter_block_user">
    <a class="twitter_block profile_image" href="http://twitter.com/<?php echo $user_name; ?>">
      <img src="<?php echo $user_image; ?>" alt="Twitter Avatar" />
      <span class="twitter_block_user_name"><?php echo $user_name; ?></span>
    </a>
  </div>
  <div class="tweet_text"><p class="tweet"><?php echo $text; ?></p></div>
</div>
