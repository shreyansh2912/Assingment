<?php

$numbers = array(1, 2, 3, 4, 5);
$total = 0;

for ($i = 0; $i < count($numbers); $i++)
{
    $total += $numbers[$i];
}

echo "The total is $total.";

?>