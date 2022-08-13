# For loops array

fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
  print(fruit)


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