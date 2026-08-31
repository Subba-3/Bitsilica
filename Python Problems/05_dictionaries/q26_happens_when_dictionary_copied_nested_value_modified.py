# Question 26
# Show what happens when a dictionary is copied and then a nested value is modified.

a = {"x": [1, 2]}
b = a.copy()

b["x"][0] = 99

print(a)
print(b)
