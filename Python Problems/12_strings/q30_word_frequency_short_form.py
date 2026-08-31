# Question 30
# Count the frequency of each word in a string.

text = "apple apple orange"

words = text.split()
frequency = {}

for word in words:
    frequency[word] = frequency.get(word, 0) + 1

print(frequency)
