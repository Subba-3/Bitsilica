# Question 15
# Generate all permutations of a string.

def permutations(text):
    if len(text) == 0:
        return [""]

    result = []

    for i in range(len(text)):
        ch = text[i]
        remaining = text[:i] + text[i + 1:]

        for p in permutations(remaining):
            result.append(ch + p)

    return result

print(permutations("abc"))
