# Question 12
# Find words that contain all five vowels.

words = ["education", "python", "sequoia"]
vowels = set("aeiou")

result = []

for word in words:
    if vowels.issubset(set(word.lower())):
        result.append(word)

print(result)
