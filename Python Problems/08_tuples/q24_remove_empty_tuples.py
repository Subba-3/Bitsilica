# Question 24
# Remove all empty tuples from a list of tuples.
#
# Beginner Python solution

lst = [(), ("a", "b"), (), ("c",)]

result = []

for t in lst:
    if len(t) != 0:
        result.append(t)

print(result)
