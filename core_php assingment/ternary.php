<!DOCTYPE html>
<html>
<body>

<?php

$a = $_REQUEST['a'];
$b = $_REQUEST['b'];
$c = $_REQUEST['c'];


if(isset($_REQUEST['submit']))
{
      echo "Largest number is: ";
      echo ($a > $b) ? (($a > $c) ? $a : $c ) : (($b > $c) ? $b : $c );
}


?>

<form action="" method="post" >

<input type="text" placeholder="Enter your numbar" name="a" ><br>
<input type="text" placeholder="Enter your numbar" name="b" ><br>
<input type="text" placeholder="Enter your numbar" name="c" ><br>
<button name="submit" >Submit</button>

</form>



</body>
</html>
