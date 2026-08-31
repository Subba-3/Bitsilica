# Question 34
# Sort a list of dictionaries by the value at a specific index in each value list.

dicts = [
    {"a": [5, 1]},
    {"a": [3, 4]},
    {"a": [7, 0]}
]
index = 1

for i in range(len(dicts)):
    for j in range(i + 1, len(dicts)):
        if dicts[i]["a"][index] > dicts[j]["a"][index]:
            dicts[i], dicts[j] = dicts[j], dicts[i]

print(dicts)
