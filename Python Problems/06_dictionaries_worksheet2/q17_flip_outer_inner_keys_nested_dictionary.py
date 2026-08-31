# Question 17
# Flip the outer and inner keys of a nested dictionary.

d = {"x": {"p": 1, "q": 2}, "y": {"q": 2}}

result = {}

for outer, inner in d.items():
    for key, value in inner.items():
        if key not in result:
            result[key] = {}
        result[key][outer] = value

print(result)
