# Question 15
# Convert a tuple of string numbers to a tuple of integers.
#
# Beginner Python solution

t = ("11", "22", "33", "44")

result = tuple(int(x) for x in t)

print(result)
