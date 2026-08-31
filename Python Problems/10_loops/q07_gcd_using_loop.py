# Question 7
# Find the GCD of two numbers using a loop.

a = 48
b = 18

while b != 0:
    remainder = a % b
    a = b
    b = remainder

print(a)
