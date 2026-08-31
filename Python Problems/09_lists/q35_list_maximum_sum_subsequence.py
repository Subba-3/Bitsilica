# Question 35
# Find the maximum sum subsequence, not necessarily contiguous.

numbers = [2, -1, 2, 3, 4, -5]

total = 0

for num in numbers:
    if num > 0:
        total += num

print(total)
