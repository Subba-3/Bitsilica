# Question 38
# Count all distinct substrings of a string using a dictionary.

s = "abc"
substrings = {}

for i in range(len(s)):
    for j in range(i + 1, len(s) + 1):
        sub = s[i:j]
        substrings[sub] = True

print(len(substrings))
