# Question 6
# Check whether a number reads the same backward using loops and arithmetic.

num = 1221
original = num
reverse = 0

while num > 0:
    digit = num % 10
    reverse = reverse * 10 + digit
    num //= 10

if original == reverse:
    print(True)
else:
    print(False)
