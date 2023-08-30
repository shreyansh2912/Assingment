<?php 
 echo "<h1>Enter the year </h1>";

 $year = $_REQUEST['year'];
 
 if(isset($_REQUEST['submit']))
 {
    if($year % 4)
    {
        echo $year." is not a leap year";
    }
    elseif ($year %4 == 0)
    {
        echo $year ."is a leap year";
    }
    elseif ($year %100 == 0)
    {
        echo $year."is not a leap year";
    }
 }


?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form action="" method="post" >
    <input type="text" placeholder=" year" name="year">
    <BUtton name="submit"  type="submit" id=submit  >Submit</BUtton>
    </form>
</body>
</html>