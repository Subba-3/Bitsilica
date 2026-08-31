# Question 28
# Reverse the part of a list after a specified position.

items = [1, 2, 3, 4, 5, 6]
position = 3

result = items[:position] + items[position:][::-1]

print(result)
