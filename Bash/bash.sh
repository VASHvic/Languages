#!/bin/bash

# for loops

for i in {0..1}
do
   echo "Welcome $i times"
done

# one liner

for i in {1..5}; do echo "Hi, $i"; done

# loop csv

while read line
 do 
 echo $line
done <  <(tail -n +2 csv.csv)