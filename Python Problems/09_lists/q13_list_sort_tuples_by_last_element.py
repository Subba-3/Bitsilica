# Question 13
# Sort a list of non-empty tuples by the last element of each tuple.

items = [(2, 5), (1, 2), (4, 4), (2, 3), (2, 1)]

for i in range(len(items)):
    for j in range(i + 1, len(items)):
        if items[i][-1] > items[j][-1]:
            items[i], items[j] = items[j], items[i]

print(items)
