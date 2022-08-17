<?php  

//function expresion

  $add = function ($a,$b) {
  return $a + $b;
  };

echo $add(1,3);

// loosely typed 
function addNumbers(int $a, int $b) { // en php 8 si tipes dona error al interrpretar pero no avisa, ja no fa falta posar strict
  return $a + $b;
}
echo addNumbers(5, 5);

//anonymous function

//el ejemple no anava pero dona =

?>