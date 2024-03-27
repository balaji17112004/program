<?php
$var="hi am balaji";
# strlen() is used to length of the string
echo strlen($var);
echo "<br>";
# str_word_count() is used to count pair word in string
echo str_word_count($var);
echo "<br>";
#strops() is used to search the same string in the program
echo strpos("Hello world!", "world");
$lower="BALAJI";
echo "<br>";
# strtolower() is used to return the string into lower
echo strtolower($lower);
echo "<br>";
# strtoupper() is used to return the string into upper
echo strtoupper($var);
echo "<br>";
#echo str_replace() is used to replace one string to another string
echo str_replace("balaji","sanjai",$var);
echo "<br>";
echo strrev($var);
$x = "Hello World!";
$y = explode(" ", $x);
echo "<br>";
//Use the print_r() function to display the result:
print_r($y);
echo "<br>";
echo substr($x,6,5);
?>