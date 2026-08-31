# Question 7
# Find the least frequent character in a string.

text = "statistics"

frequency = {}

for ch in text:
    frequency[ch] = frequency.get(ch, 0) + 1

smallest = min(frequency.values())

for ch in text:
    if frequency[ch] == smallest:
        print("Least frequent character:", ch)
        break
