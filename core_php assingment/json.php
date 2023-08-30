<?php

$json_string = '{"name":"John", "age":30, "city":"New York"}';

$my_array = json_decode($json_string, true);

echo"<pre>";
print_r($my_array);
echo"</pre>";

?>

