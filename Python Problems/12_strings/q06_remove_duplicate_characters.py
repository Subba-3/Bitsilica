# Question 6
# Keep only the first occurrence of each character.

text = "programming"
result = ""

for ch in text:
    if ch not in result:
        result += ch

print(result)
