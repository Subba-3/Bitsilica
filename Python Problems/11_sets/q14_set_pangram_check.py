# Question 14
# Check whether a sentence is a pangram using a set.

sentence = "The quick brown fox jumps over a lazy dog"

letters = set()

for ch in sentence.lower():
    if ch.isalpha():
        letters.add(ch)

if len(letters) == 26:
    print("Yes")
else:
    print("No")
