# Question 28
# Rotate a string to the right by k positions.

text = "hello"
k = 2

k = k % len(text)

result = text[-k:] + text[:-k]

print(result)
