# Question 26
# Group all keys that have the same value.

d = {"m": 1, "n": 2, "o": 1}

result = {}

for key, value in d.items():
    if value not in result:
        result[value] = []
    result[value].append(key)

print(result)
