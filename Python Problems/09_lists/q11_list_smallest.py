# Question 11
# Find the smallest number in a list.

numbers = [1, 2, 3, 4, 5]

smallest = numbers[0]

for num in numbers:
    if num < smallest:
        smallest = num

print(smallest)
