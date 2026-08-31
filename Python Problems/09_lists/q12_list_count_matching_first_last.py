# Question 12
# Count strings of length at least 2 whose first and last characters are the same.

words = ["abc", "xyz", "aba", "1221"]

count = 0

for word in words:
    if len(word) >= 2 and word[0] == word[-1]:
        count += 1

print(count)
