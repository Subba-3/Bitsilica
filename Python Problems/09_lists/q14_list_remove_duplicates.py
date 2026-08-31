# Question 14
# Remove duplicates from a list while keeping the original order.

numbers = [1, 2, 3, 2, 4, 3, 5]

result = []

for num in numbers:
    if num not in result:
        result.append(num)

print(result)
