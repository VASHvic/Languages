# For loops array

fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
  print(fruit)


  # open files

f = open("csv.csv", "r")
for l in f:
  print(l)
f.close()

# destructuring

people = [
	("Bob", 42, "Mechanic"),
	("James", 24, "Artist"),
	("Harry", 32, "Lecturer")
]

for name, age, profession in people:
	print(f"Name: {name}, Age: {age}, Profession: {profession}")

head, *middle, tail = [1, 2, 3, 4, 5]

print(middle)

# clases

class Animal:
  def __init__(self, type):
    self.type=type

a1 = Animal('dog')
print('🐕')
print(a1.type)

# open csv ?

import csv
with open('csv.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        print(', '.join(row))