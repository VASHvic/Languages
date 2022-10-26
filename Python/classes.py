class Reptile :
  def __init__(self,length,name):
    self.length = length
    self.name=name

class Snake(Reptile):
  def slither(self):
    print("I am a snake")
  def showLength(self):
    print("my length is:", self.length)
  def sayName(self):
    print("my name is:", self.name)


sneik = Snake(25, "sss")

sneik.slither()
sneik.showLength()
sneik.sayName()

