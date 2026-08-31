# Question 12
# Add an item to a tuple by converting it to a list and back.
#
# Beginner Python solution

t = (1, 2, 3)

lst = list(t)
lst.append(4)

t = tuple(lst)

print(t)
