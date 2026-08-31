# Question 30
# Find all unique elements present in a tuple of tuples using set logic.
#
# Beginner Python solution

t = ((1, 2), (2, 3), (4, 5))

result = set()

for inner in t:
    for item in inner:
        result.add(item)

print(result)
