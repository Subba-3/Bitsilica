# Question 48
# Keep strings containing all required substrings.

items = ["applebanana", "apple", "banana", "applebananacherry"]
substrings = ["apple", "banana"]

result = []

for item in items:
    valid = True

    for sub in substrings:
        if sub not in item:
            valid = False
            break

    if valid:
        result.append(item)

print(result)
