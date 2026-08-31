# Question 33
# Convert a tuple of positive integers into a single integer by concatenating their values.
#
# Beginner Python solution

t = (1, 2, 3)

result = ""

for num in t:
    result = result + str(num)

print(int(result))
