# Question 15
# Sort a dictionary by key.

d = {"b": 2, "a": 1, "c": 3}

result = {}

for key in sorted(d):
    result[key] = d[key]

print(list(result.items()))
