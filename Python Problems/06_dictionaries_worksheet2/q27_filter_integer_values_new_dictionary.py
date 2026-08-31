# Question 27
# Filter only integer values into a new dictionary.

d = {"x": 100, "y": "hello", "z": 200}
result = {}

for key, value in d.items():
    if isinstance(value, int):
        result[key] = value

print(result)
