# Question 27
# Count consecutive repeated characters.

text = "aabccddd"

result = {}
i = 0

while i < len(text):
    ch = text[i]
    count = 1
    i += 1

    while i < len(text) and text[i] == ch:
        count += 1
        i += 1

    result[ch] = count

print(result)
