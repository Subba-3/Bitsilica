# Question 20
# Set the nth bit of a number to 1 while leaving other bits unchanged.

n = 9
bit_position = 3

result = n | (1 << bit_position)

print(result)
