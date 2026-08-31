# Question 6
# Find common elements in three lists using sets.

a = ["Toy Story", "Frozen", "Moana"]
b = ["Moana", "Coco", "Frozen"]
c = ["Frozen", "Moana", "Up"]

result = set(a) & set(b) & set(c)

print(result)
