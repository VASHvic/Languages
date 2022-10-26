import sys
import fileinput

f = open("asd.css", "r")
css =f.read()
print(css)
f.close()


# replace all occurrences of 'sit' with 'SIT' and insert a line after the 5th
for i, line in enumerate(fileinput.input('pytest.html', inplace=1)):
    sys.stdout.write(line.replace('</head>', '<style>{}</style></head>'.format(css)))  # replace 'sit' and write
    