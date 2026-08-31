# Question 25
# Unzip a list of tuples into separate lists.

items = [(1, "a"), (2, "b"), (3, "c")]

numbers = []
letters = []

for item in items:
    numbers.append(item[0])
    letters.append(item[1])

print(numbers)
print(letters)
