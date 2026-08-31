# Question 23
# Change the last value in every tuple in a list to a given value.
#
# Beginner Python solution

lst = [(10, 20, 30), (40, 50, 60), (70, 80, 90)]
new_value = 100

result = []

for t in lst:
    new_tuple = t[:-1] + (new_value,)
    result.append(new_tuple)

print(result)
