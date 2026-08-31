# Question 21
# Sort a list of name-age tuples by age in ascending order.
#
# Beginner Python solution

lst = [("Alice", 25), ("Bob", 20), ("Eve", 22)]

for i in range(len(lst)):
    for j in range(i + 1, len(lst)):
        if lst[i][1] > lst[j][1]:
            lst[i], lst[j] = lst[j], lst[i]

print(lst)
