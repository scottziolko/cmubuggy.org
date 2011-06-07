<div id="homepage">
	<?php include_once("contentfeed.inc");?> 	 
	<div class="yui3-g" style="width:500px; height:145px;">
		<div class="yui3-u-3-5">
			<table class="datacompact" style="margin-top:0px;">
				<tr>
					<th colspan="2"><h3 style="margin:0;"><a href="/raceday/leaderboard">2011 Results</a></h3></th>
					<th colspan="1" style="text-align:right; font-size:1em;"><b>Men's</b></th>
					<th colspan="2" style="text-align:right; font-size:1em;"><b>Women's</b></th>
				</tr>
				<tr>
					<td><b>1<sup>st</sup></b></td>
					<td>Fringe A</td>
					<td>2:05.082</td>
					<td class="newcol">SDC A</td>
					<td>2:34.963</td>	
				</tr>
				<tr>
					<td><b>2<sup>nd</sup></b></td>
					<td>SDC A</td>
					<td>2:06.189</td>
					<td class="newcol">Fringe A</td>
					<td>2:35.075</td>	
				</tr>
				<tr>
					<td><b>3<sup>rd</sup></b></td>
					<td>SDC B</td>
					<td>2:09.671</td>
					<td class="newcol">PiKA A</td>
					<td>2:41.124</td>	
				</tr>
				<tr>
					<td colspan="5" style="font-size:12px;">Design: 1<sup>st</sup> <a href="/history/buggy/ascension">Ascension</a>, 2<sup>nd</sup> <a href="/history/buggy/bonsai">Bonsai</a>, 3<sup>rd</sup> <a href="/history/buggy/borealis">Borealis</a></td>
				</tr>
				<tr>
					<td colspan="3" style="font-size:11px;"><span style="font-size:11px;">People's Choice:</span> <a href="/history/buggy/zuke">Zuke</a></td>
					<td colspan="2" style="font-size:11px;"><span style="font-size:11px;">Spirit of Buggy:</span> CIA</td>			
				</tr>
				<tr>
					<td colspan="3" style="font-size:11px;"><span style="font-size:11px;">Chairman's Choice</span>: KapSig </td>
					<td colspan="2" style="font-size:11px;"><span style="font-size:11px;">TShirt</span>: <a href="/gallery/Shirts/DSC_9369">Fringe</a></td>	
				</tr>	
			</table>
		</div>
		<div class="yui3-u-2-5">
			<h3>Participate</h3>
			<div class="item"><a href="/seniors"><div class="icon" style="background-image:url('/img/icon_grad-cap.png')"></div></a><a href="/seniors">Seniors!</a> Become a 2012 member now for free.</div> 
			<div class="item" style="margin-top:30px;"><a href="/reference/"><div class="icon referenceicon">Reference<img src="img/icon_book.png"></div></a>Use some of that post-raceday energy to add to the reference section.</div>  
		</div>
	</div>
	<?php include_once("featurepic.inc"); ?>
	<div class="pane clearleft" style="margin-right:270px;">
		<h3 style="margin:0">Buggy Alumni Association?</h3>
		We were founded in 2008 to unite and connect alumni across teams and eras, and to support the coolest sport we know.  Join us! We're open to everyone: current students, Pittsburgh locals, enthusiasts of any kind. Find out more in <a href="/about">About Us section ...</a>	
	</div>
	<div class="pane" style="margin-right:270px;">
		<h3 style="margin:0">Buggy?</h3>
		Buggy (also called "Sweepstakes") is a unique race that has been held on and behind the Carnegie Mellon University campus during the spring carnival since 1920.  It is part uphill relay race (in which the baton is a vehicle and driver pushed by runners), and part downhill gravity racing with exciting sharp turns and speeds up to 40mph. Find out more in the <a href="/reference/What_is_buggy%3F">What is Buggy? section ...</a>
	</div>
</div> 

<?php
/////unused pieces//////

//Freeroll status
//include_once("freerollstatus.inc");

//participate inducements
//Also, our new <a href="/reference">Reference wiki</a> needs content; take a moment and add something you know about buggy.


//			<h3>Participate!</h3>
//			The website is still brand new, so let us know what you think in the <a href="forum/viewtopic.php?f=3&t=374" >Forum</a><br /><br />
//			Pictures are now easier to upload.  Add your raceday pics in the <a href="/gallery/2010-2011">Gallery</a>.


//Auction countdown
/*
				date_default_timezone_set('America/New_York');
   			$auctionend = mktime(21, 0, 0, 4, 13, 2011);
   			$hoursleft = floor(($auctionend - time())/(60*60));
 				//echo("<a href=\"/auction\">Bid now!</a> Do it for the<br />jumbotrons.<br /> Only ".$hoursleft." hours left!");
 				
 				$sql = "SELECT bid_amount FROM bids ORDER BY bid_amount DESC";
 				$result = dbQuery("cmubuggy_auction",$sql);
 				$rows = mysql_fetch_array($result);
 				$highbid = $rows[0];
 				$bidcount = mysql_num_rows($result);


			<div style="float:left; text-align:center; color:#f6ab1e; margin:-6px 10px 0 0;">
				<div style="font-size:2.5em; font-family:impact;"><?echo $hoursleft ?></div>
				<div style="font-size:.8em; font-weight: bold; margin-top: -5px;">hours<br />left to bid</div>
			</div>
			<a href="/auction">Bid now!<br />Do it for the<br />Jumbotrons.</a><br />
			<br />
			<b>Live Auction Stats</b><br />
			Number of bids: <?php echo($bidcount); ?><br />
			Highest bid: $<?php echo($highbid); ?><br />
*/

//Everything Raceday 
/*
			<h3><a href="/raceday">Everything Raceday</a></h3>
			We've got everything you need for raceday in one place.  Schedules, chats, feeds, and downloads.  <a href="/raceday">Get it.</a><br />
			<br />
			<b>Coming Up</b>: (<a href="/raceday">full details here</a>)<br />
			<!-- open php
				$auctionstart 	= mktime( 9, 0,0,4,12,2011);
				$auctionend 	= mktime(21, 0,0,4,13,2011);
				$designcomp 	= mktime( 9, 0,0,4,14,2011);
				$bartime 		= mktime(20, 0,0,4,14,2011);
				$prelims 		= mktime( 8, 0,0,4,15,2011);
				$reception 		= mktime(12,30,0,4,15,2011);
				$hob 				= mktime(13,30,0,4,15,2011);
				$exhibitions 	= mktime( 8, 0,0,4,16,2011);
				$finals 			= mktime( 9, 0,0,4,16,2011);
				$awards 			= mktime(18, 0,0,4,16,2011);
				$breakfast 		= mktime(10, 0,0,4,17,2011);

				$events = array(
					$auctionstart	=> "Tue, 9am: <a href=\"/auction\">Lead Truck auction</a> starts",							
					$auctionend  	=> "Wed, 9pm: <a href=\"/auction\">Lead Truck auction</a> closes",	
					$designcomp  	=> "Thur, 9am: Design Comp",
					$bartime 	 	=> "Thur, 8pm: Hang out at a bar",	
					$prelims 	 	=> "Fri, 8am: Prelims",
					$reception 	 	=> "Fri, 12:30pm: BAA reception",	
					$hob 			 	=> "Fri, 1:30pm: History of Buggy",	
					$exhibitions 	=> "Sat, 8am: Exhibitions",
					$finals 			=> "Sat, 9am: Finals",
					$awards 		 	=> "Sat, 6pm: Awards Ceremony",	
					$breakfast 	 	=> "Sun, 10am: Morning after breakfast"	
				);
				
				$currenttime = time();
				$dispcount = 0;
				foreach ($events as $eventtime => $desc){
					if($currenttime-60*60 < $eventtime && $dispcount < 2){
						echo($desc."<br />");
						$dispcount++;	
					}
				}
			--> close php	
*/

//During Auction
/*
			<h3>Lead Truck Auction</h3>
			<div style="float:left; text-align:center; color:#f6ab1e; margin:-6px 10px 0 0;">
				<div style="font-size:2.5em; font-family:impact;">Auction</div>
				<div style="font-size:.8em; font-weight: bold; margin-top: -5px;">OVER</div>
			</div>
			<?php
							date_default_timezone_set('America/New_York');
   			$auctionend = mktime(21, 0, 0, 4, 13, 2011);
   			$hoursleft = floor(($auctionend - time())/(60*60));
 				//echo("<a href=\"/auction\">Bid now!</a> Do it for the<br />jumbotrons.<br /> Only ".$hoursleft." hours left!");
 				
 				$sql = "SELECT bid_amount FROM bids ORDER BY bid_amount DESC";
 				$result = dbQuery("cmubuggy_auction",$sql);
 				$rows = mysql_fetch_array($result);
 				$highbid = $rows[0];
 				$bidcount = mysql_num_rows($result);
			?>
			<br /><br /><br /><br />
			<b>Summary Auction Stats</b><br />
			Number of bids: <?php echo($bidcount); ?><br />
			Highest bid: $<?php echo($highbid); ?><br />
*/
?>