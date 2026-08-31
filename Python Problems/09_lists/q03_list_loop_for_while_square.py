# Question 3
# Print numbers 1 to 5 using for and while loops, then create a list of their squares.

numbers = [1, 2, 3, 4, 5]

for num in numbers:
    print(num)

i = 0
while i < len(numbers):
    print(numbers[i])
    i += 1

squares = [num ** 2 for num in numbers]
print(squares)
