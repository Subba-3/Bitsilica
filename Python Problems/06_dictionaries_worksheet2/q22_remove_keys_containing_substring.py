# Question 22
# Remove keys containing a given substring.

d = {"sun": 1, "sunny": 2, "rain": 3}
substring = "sun"

keys_to_remove = []

for key in d:
    if substring in key:
        keys_to_remove.append(key)

for key in keys_to_remove:
    del d[key]

print(d)
