# Question 19
# Find the difference between the largest and smallest of three numbers using expressions.

a = 8
b = 27
c = 14

largest = a if a > b and a > c else b if b > c else c
smallest = a if a < b and a < c else b if b < c else c

print(largest - smallest)
