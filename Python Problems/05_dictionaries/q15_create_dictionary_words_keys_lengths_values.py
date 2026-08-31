# Question 15
# Create a dictionary with words as keys and their lengths as values.

words = ["dog", "cat", "rabbit"]
d = {}

for word in words:
    d[word] = len(word)

print(d)
