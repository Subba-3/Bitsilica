# Question 1
# Check whether a string is a palindrome and whether its two halves are symmetrical.

text = "madam"

if text == text[::-1]:
    print("Palindrome: Yes")
else:
    print("Palindrome: No")

mid = len(text) // 2

if len(text) % 2 == 0:
    first = text[:mid]
    second = text[mid:]
else:
    first = text[:mid]
    second = text[mid + 1:]

if first == second:
    print("Symmetrical: Yes")
else:
    print("Symmetrical: No")
