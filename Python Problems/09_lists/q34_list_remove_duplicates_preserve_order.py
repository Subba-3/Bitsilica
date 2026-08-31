# Question 34
# Remove duplicates while preserving original order.

numbers = [1, 2, 2, 3, 4, 4, 5, 6, 5]

result = []

for num in numbers:
    if num not in result:
        result.append(num)

print(result)
