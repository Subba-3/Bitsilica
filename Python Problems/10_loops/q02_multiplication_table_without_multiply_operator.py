# Question 2
# Print a multiplication table from 1 to 10 without using the * operator.

num = 5
result = 0

for i in range(1, 11):
    result += num
    print(num, "x", i, "=", result)
