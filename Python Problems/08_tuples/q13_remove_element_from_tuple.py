# Question 13
# Remove a specific element from a tuple by converting it to a list and back.
#
# Beginner Python solution

t = (1, 2, 3, 4)
remove = 2

lst = list(t)
lst.remove(remove)

t = tuple(lst)

print(t)
