# Question 35
# Find all possible pair combinations from two tuples, combining each element from the first with each from the second.
#
# Beginner Python solution

t1 = (1, 2)
t2 = (3, 4)

result = []

for a in t1:
    for b in t2:
        result.append((a, b))

print(result)
