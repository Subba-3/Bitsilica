# Question 19
# Identify and print elements that occur more than once in a tuple.
#
# Beginner Python solution

t = (2, 4, 6, 2, 8, 4, 6, 2)

duplicates = []

for item in t:
    if t.count(item) > 1 and item not in duplicates:
        duplicates.append(item)

for item in duplicates:
    print(item)
