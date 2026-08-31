# Question 44
# Split a string into groups of n characters.

text = "abcdefgh"
n = 3

result = []

for i in range(0, len(text), n):
    result.append(text[i:i + n])

print(result)
