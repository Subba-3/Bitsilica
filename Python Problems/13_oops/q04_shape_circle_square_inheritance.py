# Question 4
# Create Shape with draw(), then customize it in Circle and Square.

class Shape:
    def draw(self):
        print("Drawing a shape")

class Circle(Shape):
    def draw(self):
        print("Drawing a circle")

class Square(Shape):
    def draw(self):
        print("Drawing a square")

Circle().draw()
Square().draw()
