# Question 11
# Create a string containing characters that are uncommon to both strings.

word1 = "apple"
word2 = "orange"

common = set(word1) & set(word2)

result = ""

for ch in word1 + word2:
    if ch not in common and ch not in result:
        result += ch

print(result)
