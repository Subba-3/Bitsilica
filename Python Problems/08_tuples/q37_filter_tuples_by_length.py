# Question 37
# Filter a list of tuples, keeping only those where the tuple length matches a specified length.
#
# Beginner Python solution

lst = [(1, 2, 3), (4, 5), (6, 7, 8)]
required_length = 3

result = []

for t in lst:
    if len(t) == required_length:
        result.append(t)

print(result)
