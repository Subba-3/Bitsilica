# Question 34
# Replace multiple words in a string.

text = "I like apples and bananas."
replace = {"apples": "oranges", "bananas": "grapes"}

for old, new in replace.items():
    text = text.replace(old, new)

print(text)
