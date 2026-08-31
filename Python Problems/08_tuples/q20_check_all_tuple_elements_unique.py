# Question 20
# Check whether all elements in a tuple are unique.
#
# Beginner Python solution

t = (1, 2, 3, 4, 5)

if len(t) == len(set(t)):
    print(True)
else:
    print(False)
