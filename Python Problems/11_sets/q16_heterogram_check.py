# Question 16
# Check whether a string has no repeated letters.

word = "lamp"

if len(set(word.lower())) == len(word):
    print("Yes")
else:
    print("No")
