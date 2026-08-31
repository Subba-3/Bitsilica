# Question 35
# Remove punctuation while keeping letters, digits, and spaces.

import string

text = "Hello, world! How are you?"
result = ""

for ch in text:
    if ch not in string.punctuation:
        result += ch

print(result)
