# Question 25
# Count the number of tuples where every element is divisible by a given integer K.
#
# Beginner Python solution

lst = [(3, 6), (9, 12, 15), (4, 8)]
k = 3

count = 0

for t in lst:
    valid = True

    for num in t:
        if num % k != 0:
            valid = False
            break

    if valid:
        count += 1

print(count)
