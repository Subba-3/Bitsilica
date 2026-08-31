# Question 32
# Sort dictionary keys and also sort the values list of each key.

d = {"c": [3, 1], "a": [2, 4], "b": [5, 1]}

result = {}

for key in sorted(d):
    result[key] = sorted(d[key])

print(list(result.items()))
