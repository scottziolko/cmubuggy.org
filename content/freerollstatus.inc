<?php
	$freeroll = new freeroll();
	$freerollList = $freeroll->GetList(array(array("date",">",date("y-m-d",time()-60*60*24*450))),"date");
?>

<h3>Freeroll Schedule</h3>
<div id="rollschedule">
	<div id="rollslist">
		<div class="items">
		<?php
			foreach($freerollList as $freeroll){
					$sunrise 	= date('g:i a',strtotime($freeroll->sunrise));
					$dayofweek	= date('D', strtotime($freeroll->date));
					$day 			= date('d', strtotime($freeroll->date));
					$month		= date('M', strtotime($freeroll->date));
					$status		= $freeroll->status;
					$newsURL		= $freeroll->newsURL;
					$galleryURL	= $freeroll->galleryURL;
					$item_class = "status_pos";
					
					if($status == "Canceled") { $item_class="status_neg"; }
					if($status == "No Rolls") { $item_class="status_disabled"; }
					
					if($newsURL != ""){ $newsURL = "<a style=\"float:right\" href=\"/news/".$newsURL."\"><img alt=\"News\" height=\"22px\" src=\"/img/icon_news.png\" /></a>"; }
					if($galleryURL != ""){ $galleryURL = "<a style=\"float:right\" href=\"/gallery/".$galleryURL."\"><img alt=\"Gallery\" height=\"22px\" src=\"/img/icon_camera.gif\" /></a>"; }
					$links = "<div style=\"float:right; height:22px;\">".$newsURL.$galleryURL."</div>";
			?>
				<div class="item">
					<div class="icon dateicon <?php echo($item_class);?>">
						<span class="dayofweek"><?php echo($dayofweek); ?></span><br />
						<span class="month"><?php echo($month); ?></span><br />
						<span class="day"><?php echo($day); ?></span>
					</div>
					<img src="/img/icon_sunrise.png" height="16px" width="16px" alt="Sunrise time" style="float:left; margin-right:4px">
					<?php echo($sunrise); ?>
					<?php echo($links); ?>	<br />
					<?php echo($freeroll->status); ?> <br />
					<span class="detail"><?php echo($freeroll->note); ?>	</span>
				</div>
			<?php
			}
		?>
		</div>
	</div>
	<div class="actions"> 
		<a class="feedprev">&laquo; Past</a> 
		<a class="feednext">Future &raquo;</a> 
	</div> 
</div>
<script type="text/javascript">
$(function() {	
	$("#rollslist").scrollable({ vertical: true, speed:400, next:".feednext", prev:".feedprev" });
	//var rollslistAPI = $("#rollslist").data("scrollable");
	//rollslistAPI.seekTo(<?php echo($seekto); ?>,0);
});
</script>