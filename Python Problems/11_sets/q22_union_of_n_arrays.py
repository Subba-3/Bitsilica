# Question 22
# Find the union of multiple arrays.

friends_colors = [
    ["red", "blue"],
    ["green", "red"],
    ["yellow", "blue"]
]

result = set()

for colors in friends_colors:
    result.update(colors)

print(result)
