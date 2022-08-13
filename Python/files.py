  # open files

f = open("csv.csv", "r")
for l in f:
  print(l)
f.close()


# open csv ?

import csv
with open('csv.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        print(', '.join(row))