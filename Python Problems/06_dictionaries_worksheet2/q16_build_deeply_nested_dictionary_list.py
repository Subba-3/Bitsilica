# Question 16
# Build a deeply nested dictionary from a list.

lst = ["a", "b", "c", "d"]

d = {}

current = d

for i in range(len(lst)):
    current[lst[i]] = {}
    current = current[lst[i]]

print(d)
