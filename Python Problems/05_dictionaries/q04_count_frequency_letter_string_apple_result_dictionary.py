# Question 4
# Count the frequency of each letter in the string 'apple' and store the result in a dictionary.

text = "apple"
count = {}

for ch in text:
    if ch in count:
        count[ch] += 1
    else:
        count[ch] = 1

print(count)
