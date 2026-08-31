# Question 36
# Compute the frequency of each element in a tuple and return the result as a dictionary.
#
# Beginner Python solution

t = (1, 2, 2, 3, 3, 3)

frequency = {}

for item in t:
    if item in frequency:
        frequency[item] += 1
    else:
        frequency[item] = 1

print(frequency)
