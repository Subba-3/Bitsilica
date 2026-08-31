# Question 25
# Extract unique values from a dictionary.

d = {"a": 1, "b": 2, "c": 2, "d": 3}

unique = []

for value in d.values():
    if value not in unique:
        unique.append(value)

print(unique)
