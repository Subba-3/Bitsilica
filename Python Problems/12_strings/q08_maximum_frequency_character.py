# Question 8
# Find the character with the maximum frequency.

text = "banana"

frequency = {}

for ch in text:
    frequency[ch] = frequency.get(ch, 0) + 1

largest = max(frequency.values())

for ch in text:
    if frequency[ch] == largest:
        print("Maximum frequency character:", ch)
        break
