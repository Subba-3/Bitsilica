# Question 35
# Sort the keys inside a nested dictionary by their value.

d = {
    "group1": {"b": 2, "a": 1},
    "group2": {"c": 3, "d": 0}
}

result = {}

for group, values in d.items():
    items = list(values.items())

    for i in range(len(items)):
        for j in range(i + 1, len(items)):
            if items[i][1] > items[j][1]:
                items[i], items[j] = items[j], items[i]

    result[group] = items

print(result)
