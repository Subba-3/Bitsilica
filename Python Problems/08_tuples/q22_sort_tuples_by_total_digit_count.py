# Question 22
# Sort a list of tuples by the total number of digits across all elements in each tuple.
#
# Beginner Python solution

lst = [(1, 2), (10, 11), (3, 44)]

def digit_count(number):
    return len(str(abs(number)))

for i in range(len(lst)):
    for j in range(i + 1, len(lst)):
        count1 = digit_count(lst[i][0]) + digit_count(lst[i][1])
        count2 = digit_count(lst[j][0]) + digit_count(lst[j][1])

        if count1 > count2:
            lst[i], lst[j] = lst[j], lst[i]

print(lst)
