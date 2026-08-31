# Question 29
# Convert a tuple of nested tuples into a single flat tuple.
#
# Beginner Python solution

t = ((1, 2), (3, 4), (5, 6))

result = ()

for inner in t:
    result = result + inner

print(result)
