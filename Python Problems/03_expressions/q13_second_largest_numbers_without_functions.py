# Question 13
# Find the second largest of three numbers without functions.

a = 20
b = 12
c = 18

largest = a if a > b and a > c else b if b > c else c
smallest = a if a < b and a < c else b if b < c else c
second = a + b + c - largest - smallest

print(second)
