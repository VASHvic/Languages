#!/bin/bash

# loop csv

while read line
 do 
 echo $line
done <  <(tail -n +2 '../csv.csv')

