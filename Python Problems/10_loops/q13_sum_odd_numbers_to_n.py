# Question 13
# Find the sum of all odd numbers from 1 to n using loops.

n = 10
total = 0

for num in range(1, n + 1):
    if num % 2 != 0:
        total += num

print(total)
