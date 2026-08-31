# Question 12
# Create a Calculator class with add, subtract, multiply, and divide methods.

class Calculator:
    def add(self, a, b):
        return a + b

    def subtract(self, a, b):
        return a - b

    def multiply(self, a, b):
        return a * b

    def divide(self, a, b):
        return a / b

calc = Calculator()

print(calc.add(4, 5))
print(calc.subtract(4, 5))
print(calc.multiply(4, 5))
print(calc.divide(10, 2))
