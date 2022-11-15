//SPDX-License-Identifier: MIT
pragma solidity 0.8.13;
import "https://github.com/OpenZeppelin/openz...";
import "https://github.com/OpenZeppelin/openz...";
contract TheodoresToken is ERC20("Theodores Token", "TT"),Ownable{
    function mintFifty() public onlyOwner {
        _mint(msg.sender, 50 * 10**18);
    }
}