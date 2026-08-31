# Question 21
# Remove keys whose numeric values are greater than a limit; ignore non-numeric values.

d = {"a": 5, "b": 10, "c": 15, "d": "big"}
limit = 10

keys_to_remove = []

for key, value in d.items():
    if isinstance(value, (int, float)) and value > limit:
        keys_to_remove.append(key)

for key in keys_to_remove:
    del d[key]

print(d)
