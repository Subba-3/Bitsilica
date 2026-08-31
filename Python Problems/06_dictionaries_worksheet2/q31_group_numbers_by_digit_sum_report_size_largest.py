# Question 31
# Group numbers by digit sum and report the size of the largest group.

nums = [11, 20, 12, 21, 3]
groups = {}

for num in nums:
    digit_sum = 0
    temp = num

    while temp > 0:
        digit_sum += temp % 10
        temp //= 10

    if digit_sum not in groups:
        groups[digit_sum] = []

    groups[digit_sum].append(num)

largest = 0

for group in groups.values():
    if len(group) > largest:
        largest = len(group)

print(largest)
