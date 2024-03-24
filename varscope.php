<?php
#global variable
$var=10000;
function myrupee($var){
    echo $var;
    return $var;
}
myrupee($v);
echo $var;
echo "<br>";
echo "sucess";
echo "<br>";
?>
<?php
function my($var){
#local variable
    $var=10000;
    echo $var;
    return $var;
}
myrupee($v);
echo $var;
echo "<br>";
echo "sucess";


?>
<?php
$var=10000;
function useglob(){
#using global variable
    global $var;
    echo $var;
    return $var;
}
myrupee($v);
echo $var;
echo "<br>";
echo "sucess";


?>