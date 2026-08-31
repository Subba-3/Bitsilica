# Question 10
# Find the largest number in a list.

numbers = [1, 2, 3, 4, 5]

largest = numbers[0]

for num in numbers:
    if num > largest:
        largest = num

print(largest)
