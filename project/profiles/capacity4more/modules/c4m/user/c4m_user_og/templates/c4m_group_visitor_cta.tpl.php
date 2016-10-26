<?php

/**
 * @file
 * Template to render the CTA block for a visitor.
 */
?>
<div class="c4m-wide-gothic-btn">
  <a class="btn text-small" href="<?php print $url; ?>">
    <i class="fa <?php print $button_icon; ?>"></i>
    <?php print $button_label; ?>
  </a>
  <span class="">Please <a class="" href="http://cfm.local/user/login?destination=<?php print t(request_path()); ?>">log in</a> first if you have a C4D account</span>
</div>
