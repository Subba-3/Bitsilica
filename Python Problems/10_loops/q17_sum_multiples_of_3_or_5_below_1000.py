# Question 17
# Find the sum of all numbers below 1000 that are multiples of 3 or 5.

total = 0

for num in range(1, 1000):
    if num % 3 == 0 or num % 5 == 0:
        total += num

print(total)
