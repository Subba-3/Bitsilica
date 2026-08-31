# Question 31
# Compute the element-wise sum of multiple tuples of equal length.
#
# Beginner Python solution

t1 = (1, 2, 3, 4)
t2 = (3, 5, 2, 1)
t3 = (2, 2, 3, 1)

result = []

for i in range(len(t1)):
    total = t1[i] + t2[i] + t3[i]
    result.append(total)

print(tuple(result))
