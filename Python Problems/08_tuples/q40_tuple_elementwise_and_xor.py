# Question 40
# Perform element-wise AND and XOR operations between two tuples of integers of equal length.
#
# Beginner Python solution

t1 = (1, 2, 3)
t2 = (2, 2, 2)

and_result = []
xor_result = []

for i in range(len(t1)):
    and_result.append(t1[i] & t2[i])
    xor_result.append(t1[i] ^ t2[i])

print("AND:", tuple(and_result))
print("XOR:", tuple(xor_result))
