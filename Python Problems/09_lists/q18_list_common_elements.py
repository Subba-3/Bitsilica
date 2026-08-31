# Question 18
# Find common elements between two lists.

list1 = [1, 2, 3, 4]
list2 = [3, 4, 5, 6]

result = []

for num in list1:
    if num in list2 and num not in result:
        result.append(num)

print(result)
