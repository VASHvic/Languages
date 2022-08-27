#!/bin/bash


for i in {1..3}
do
  echo $i
done

# one liners

noms=pepe,juan
for nom in $noms;do echo $nom; done

for i in {1..5}; do echo "Hi, $i"; done


# ifs dins de loops
for i in {1..10}
do
  if [ $i -eq 3 ] || [ $i -eq 5 ]
  then
    echo $i
  fi
done


