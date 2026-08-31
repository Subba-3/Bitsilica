# Question 33
# Sort a dictionary by the sum of its list values.

d = {"x": [5, 5], "y": [1, 2, 3], "z": [10]}

items = list(d.items())

for i in range(len(items)):
    for j in range(i + 1, len(items)):
        if sum(items[i][1]) > sum(items[j][1]):
            items[i], items[j] = items[j], items[i]

print(items)
