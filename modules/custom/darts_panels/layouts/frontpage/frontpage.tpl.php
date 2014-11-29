<?php if($content['content_top']):  ?>
    <?php print render($content['content_top']); ?>
<?php endif; ?>

<div class="content-wrapper main-content clearfix">
  <div class="container">
    <?php if($content['content']):  ?>
      <div class="content">
        <?php print render($content['content']); ?>
      </div>
    <?php endif; ?>

    <?php if($content['sidebar_right']):  ?>
      <div class="sidebar-right">
        <?php print render($content['sidebar_right']); ?>
      </div>
    <?php endif; ?>
  </div>
</div>

<?php if($content['content_bottom']):  ?>
  <?php print render($content['content_bottom']); ?>
<?php endif; ?>
