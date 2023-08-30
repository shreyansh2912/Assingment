<?php
// Accept input from the user
$sub_1 = $_REQUEST['sub_1'];
$sub_2 = $_REQUEST['sub_2'];
$sub_3 = $_REQUEST['sub_3'];
$sub_4 = $_REQUEST['sub_4'];
$sub_5 = $_REQUEST['sub_5'];

// It will calculate total, average, percentage, and grade
$total = $sub_1 + $sub_2 + $sub_3 + $sub_4 + $sub_5;
$average = $total / 5.0;
$percentage = ($total / 500.0) * 100;

if ($average >= 90)
{
    $grade = "A";
} 
else 
{
    if ($average >= 80 && $average < 90) {
        $grade = "B";
    } else {
        if ($average >= 70 && $average < 80) {
            $grade = "C";
        } else {
            if ($average >= 60 && $average < 70) {
                $grade = "D";
            } else {
                $grade = "E";
            }
        }
    }
}

// It will print the final output
echo "The Total marks = ". $total. "/500\n" ;
echo "The Average marks = ". $average. "\n" ;
echo "The Percentage = ". $percentage. "%\n" ;
echo "The Grade = '". $grade. "'\n" ;
?>

<!DOCTYPE html>
<html>
<head>
	<title>Calculate Percentage and Grade</title>
</head>
<body>
	<form method="post" action="calculate.php">
		<label for="sub_1">Subject 1:</label>
		<input type="number" id="sub_1" name="sub_1"><br><br>

		<label for="sub_2">Subject 2:</label>
		<input type="number" id="sub_2" name="sub_2"><br><br>

		<label for="sub_3">Subject 3:</label>
		<input type="number" id="sub_3" name="sub_3"><br><br>

		<label for="sub_4">Subject 4:</label>
		<input type="number" id="sub_4" name="sub_4"><br><br>

		<label for="sub_5">Subject 5:</label>
		<input type="number" id="sub_5" name="sub_5"><br><br>

		<input type="submit" value="Calculate">
	</form>
</body>
</html>
