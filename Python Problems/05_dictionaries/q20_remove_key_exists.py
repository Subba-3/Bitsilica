# Question 20
# Remove key z only if it exists.

d = {"x": 1, "y": 2}

if "z" in d:
    del d["z"]
else:
    print("Key not found")
