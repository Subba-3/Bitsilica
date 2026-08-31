# Question 6
# Concatenate two lists into a new list and use extend() to add the second list to the first.

list1 = ["a", "b", "c"]
list2 = [1, 2, 3]

combined = list1 + list2
print(combined)

list1.extend(list2)
print(list1)
print(list2)
