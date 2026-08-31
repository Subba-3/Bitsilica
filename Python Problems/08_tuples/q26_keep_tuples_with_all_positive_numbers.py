# Question 26
# Keep only tuples where all numbers are positive.
#
# Beginner Python solution

lst = [(1, 2), (-3, 4), (5, 6)]

result = []

for t in lst:
    valid = True

    for num in t:
        if num <= 0:
            valid = False
            break

    if valid:
        result.append(t)

print(result)
