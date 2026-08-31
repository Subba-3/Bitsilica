# Question 23
# Find the dictionary with the most key-value pairs.

dicts = [
    {"a": 1, "b": 2},
    {"x": 1, "y": 2, "z": 3},
    {"k": 9}
]

largest = dicts[0]

for d in dicts:
    if len(d) > len(largest):
        largest = d

print(largest)
