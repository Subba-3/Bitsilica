# Question 5
# Sort a list in ascending and descending order, copy the sorted list, and print both lists.

numbers = [3, 1, 4, 2, 5]

numbers.sort()
print(numbers)

numbers.sort(reverse=True)
print(numbers)

copy_list = numbers.copy()

print(numbers)
print(copy_list)
