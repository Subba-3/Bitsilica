# Question 14
# Check whether a number is a perfect number.

num = 28
total = 0

for divisor in range(1, num):
    if num % divisor == 0:
        total += divisor

if total == num:
    print(True)
else:
    print(False)
