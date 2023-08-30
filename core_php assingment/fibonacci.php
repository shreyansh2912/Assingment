

<?php
$n = 10;
$a = 0;
$b = 1;

echo "Fibonacci series for first $n numbers: ";

for ($i = 1; $i <= $n; $i++)
{
    echo "$a <br> ";

    $c = $a + $b;
    $a = $b;
    $b = $c;

}
?>




