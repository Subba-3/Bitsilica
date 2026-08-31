# Question 13
# Find words that occur in only one of two strings.

text1 = "red blue green"
text2 = "blue yellow red"

words1 = set(text1.split())
words2 = set(text2.split())

result = list(words1 ^ words2)

print("Uncommon words:", result)
