<?
 $auctionEnd = date_create('2012-04-18 19:00:00');
 $auctionStart = date_create('2012-04-10 23:59:00');
 $currentDate = date_create();
 $timeTillAuctionStart=date_diff($auctionStart, $currentDate, false); 
 $timeTillAuctionEnd=date_diff($auctionEnd, $currentDate); 
 if($timeTillAuctionStart->invert == 1 || $timeTillAuctionEnd->invert == 0){
  echo json_encode(array("auctionGo"=>"0"));
 } else {
  echo json_encode(array("auctionGo"=>"1"));
 }


?>