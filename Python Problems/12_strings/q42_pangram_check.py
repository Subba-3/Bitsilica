# Question 42
# Check whether a string contains every letter of the alphabet.

text = "The quick brown fox jumps over the lazy dog"

letters = set()

for ch in text.lower():
    if ch.isalpha():
        letters.add(ch)

print("Is pangram:", "Yes" if len(letters) == 26 else "No")
