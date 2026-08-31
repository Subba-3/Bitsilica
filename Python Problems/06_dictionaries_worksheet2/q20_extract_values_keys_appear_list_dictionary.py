# Question 20
# Extract values for keys that appear in both a list and dictionary.

d = {"a": 100, "b": 200, "c": 300}
lst = ["b", "c", "d"]

result = {}

for key in lst:
    if key in d:
        result[key] = d[key]

print(result)
