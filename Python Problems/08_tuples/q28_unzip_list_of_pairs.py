# Question 28
# Separate each pair in a list of tuples into its own list (unzipping).
#
# Beginner Python solution

lst = [(1, "a"), (2, "b"), (3, "c")]

numbers = []
letters = []

for pair in lst:
    numbers.append(pair[0])
    letters.append(pair[1])

print(numbers)
print(letters)
