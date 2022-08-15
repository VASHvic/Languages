class Reptile :
  def __init__(self,length):
    self.length = length

class Snake(Reptile):
  def slither(self):
    print("I am a snake")
  def showLength(self):
    print("my length is:", self.length)


sneik = Snake(25)

sneik.slither()
sneik.showLength()

