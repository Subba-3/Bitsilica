# Question 28
# Show the difference between shallow copy and deep copy using a nested dictionary.

import copy

original = {"data": {"x": 1}}

shallow = original.copy()
deep = copy.deepcopy(original)

shallow["data"]["x"] = 10
deep["data"]["x"] = 20

print("Original:", original)
print("Shallow:", shallow)
print("Deep:", deep)
