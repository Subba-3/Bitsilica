# Question 30
# Generate all permutations of a list.

def permutations(items):
    if len(items) == 0:
        return [[]]

    result = []

    for i in range(len(items)):
        first = items[i]
        remaining = items[:i] + items[i + 1:]

        for p in permutations(remaining):
            result.append([first] + p)

    return result

print(permutations([1, 2, 3]))
