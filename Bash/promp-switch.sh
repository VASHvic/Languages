#!/bin/bash

read -p "How old are you?" age
read -p "What is your name?" name


#while + prompt + switch

while true; do
  read -p "Do you want a beer?" answer
  case $answer in
    [Yy]* ) 
      if [ $age -lt 21 ] ; then
       echo "You are too young"
      else
        echo "Enjoy your beer $name"
      fi
    break;;
    [Nn]* ) 
      echo "Wise choice"
    exit;;
    * ) echo "Please answer yes or no";;
  esac
done