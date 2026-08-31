# Question 27
# For each tuple in a list, calculate the sum of its elements and print the list of results.
#
# Beginner Python solution

lst = [(1, 2), (2, 3), (3, 4)]

result = []

for t in lst:
    result.append(sum(t))

print(result)
