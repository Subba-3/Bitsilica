# Question 19
# Flatten a shallow nested list.

items = [[1, 2], [3, 4], [5, 6]]

result = []

for inner in items:
    for item in inner:
        result.append(item)

print(result)
