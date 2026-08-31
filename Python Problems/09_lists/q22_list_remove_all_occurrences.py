# Question 22
# Remove all occurrences of a specific element from a list.

numbers = [1, 2, 3, 2, 4, 2, 5]
remove = 2

result = []

for num in numbers:
    if num != remove:
        result.append(num)

print(result)
