def spam():
  eggs=10
  return eggs

print(spam())

def have_fun():
  for  i in range(5):
    print(i)

have_fun()

#anonymous funcions (lambda)

my_list=[1,2,3]
test = map(lambda x: x*2, my_list) # returns iterator, need to convert to list or set

print(list(test))

def addition(n):
    return n + n

result = map(addition, my_list)
print(list(result))