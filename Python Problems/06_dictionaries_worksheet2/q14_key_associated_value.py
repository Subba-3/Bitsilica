# Question 14
# Find the key associated with a given value.

d = {"x": 100, "y": 200}
value = 200

for key in d:
    if d[key] == value:
        print("Key for value 200:", key)
