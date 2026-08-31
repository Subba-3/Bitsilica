# Question 17
# Find words longer than n from a list.

words = ["hello", "world", "python", "is", "great"]
n = 4

result = []

for word in words:
    if len(word) > n:
        result.append(word)

print(result)
