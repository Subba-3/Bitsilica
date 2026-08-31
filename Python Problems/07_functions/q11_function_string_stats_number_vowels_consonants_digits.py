# Question 11
# Write a function string_stats(s) that returns the number of vowels, consonants, and digits.

def string_stats(s):
    vowels = 0
    consonants = 0
    digits = 0

    for ch in s:
        if ch.lower() in "aeiou":
            vowels += 1
        elif ch.isalpha():
            consonants += 1
        elif ch.isdigit():
            digits += 1

    return vowels, consonants, digits

print(string_stats("Hello123"))
