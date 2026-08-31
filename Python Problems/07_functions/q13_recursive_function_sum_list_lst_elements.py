# Question 13
# Write a recursive function sum_list(lst) to return the sum of all elements.

def sum_list(lst):
    if len(lst) == 0:
        return 0
    else:
        return lst[0] + sum_list(lst[1:])

print(sum_list([1, 2, 3, 4]))
