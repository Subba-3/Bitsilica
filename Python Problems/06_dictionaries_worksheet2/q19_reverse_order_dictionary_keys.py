# Question 19
# Reverse the order of dictionary keys.

d = {"first": 1, "second": 2, "third": 3}

result = {}

keys = list(d.keys())

for i in range(len(keys) - 1, -1, -1):
    key = keys[i]
    result[key] = d[key]

print(result)
