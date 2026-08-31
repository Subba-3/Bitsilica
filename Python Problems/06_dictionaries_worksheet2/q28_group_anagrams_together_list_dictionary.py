# Question 28
# Group anagrams together using a list and dictionary.

words = ["listen", "silent", "enlist", "hello", "olleh"]
groups = {}

for word in words:
    key = "".join(sorted(word))

    if key not in groups:
        groups[key] = []

    groups[key].append(word)

result = list(groups.values())

print(result)
