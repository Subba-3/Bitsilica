# Question 30
# Find the size of the largest subset of words that are anagrams.

words = ["bat", "tab", "eat", "tea", "tan", "nat"]
groups = {}

for word in words:
    key = "".join(sorted(word))

    if key not in groups:
        groups[key] = 0

    groups[key] += 1

largest = 0

for count in groups.values():
    if count > largest:
        largest = count

print(largest)
