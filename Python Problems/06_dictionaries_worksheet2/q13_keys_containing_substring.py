# Question 13
# Find keys containing a given substring.

d = {"hello": 1, "world": 2, "hell": 3}
substring = "hell"

result = []

for key in d:
    if substring in key:
        result.append(key)

print("Keys containing 'hell':", result)
