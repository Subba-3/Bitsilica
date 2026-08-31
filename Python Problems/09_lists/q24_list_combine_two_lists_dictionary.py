# Question 24
# Combine two lists into a dictionary.

keys = ["a", "b", "c"]
values = [1, 2, 3]

result = {}

for i in range(len(keys)):
    result[keys[i]] = values[i]

print(result)
