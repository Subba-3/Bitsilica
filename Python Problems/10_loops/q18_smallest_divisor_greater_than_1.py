# Question 18
# Find the smallest divisor of a number that is greater than 1.

num = 91
divisor = 2

while divisor <= num:
    if num % divisor == 0:
        break
    divisor += 1

print(divisor)
