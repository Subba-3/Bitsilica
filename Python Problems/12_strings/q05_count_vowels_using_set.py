# Question 5
# Count vowels in a string using a set.

text = "education"
vowels = set("aeiou")

count = 0

for ch in text.lower():
    if ch in vowels:
        count += 1

print("Vowels Count:", count)
