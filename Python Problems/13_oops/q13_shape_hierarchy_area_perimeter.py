# Question 13
# Create Shape, Circle, Triangle, and Square classes with their own area/perimeter methods.

class Shape:
    def area(self):
        return 0

    def perimeter(self):
        return 0

class Circle(Shape):
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return 3.14159 * self.radius * self.radius

    def perimeter(self):
        return 2 * 3.14159 * self.radius

class Triangle(Shape):
    def __init__(self, base, height, a, b, c):
        self.base = base
        self.height = height
        self.a = a
        self.b = b
        self.c = c

    def area(self):
        return 0.5 * self.base * self.height

    def perimeter(self):
        return self.a + self.b + self.c

class Square(Shape):
    def __init__(self, side):
        self.side = side

    def area(self):
        return self.side * self.side

    def perimeter(self):
        return 4 * self.side

triangle = Triangle(6, 4, 5, 5, 6)

print(triangle.area())
print(triangle.perimeter())
