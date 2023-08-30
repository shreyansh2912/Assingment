<?php 


echo "<h1>Enter your marks</h1>";

$value1 = $_REQUEST['value1'];     
$value2 = $_REQUEST['value2'];     
$value3 = $_REQUEST['value3'];     
$value4 = $_REQUEST['value4'];     
$value5 = $_REQUEST['value5'];  

$total = $value1 +$value2 +$value3 +$value4 +$value5;

$percentage = $total /500 * 100;

if (isset($_REQUEST['submit']))
{
    echo "Your Percentage is". $percentage ; 
}





?>


<form action=''method='post'>
Physics:  <input type="text" placeholder ="enter your marks" name="value1" id="value"><br>
Chemistry:  <input type="text" placeholder ="enter your marks" name="value2" id="value"><br>
Biology:  <input type="text" placeholder ="enter your marks" name="value3" id="value"><br>
Mathematics:  <input type="text" placeholder ="enter your marks" name="value4" id="value"><br>
Computer:  <input type="text" placeholder ="enter your marks" name="value5" id="value"><br><br>
<button name='submit' type="submit" id="submit" >Submit</button>   
</form>