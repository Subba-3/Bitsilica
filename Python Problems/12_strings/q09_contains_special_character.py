# Question 9
# Check whether a string contains characters other than letters and numbers.

text = "Hello@ 123"

found = False

for ch in text:
    if not ch.isalnum() and ch != " ":
        found = True
        break

if found:
    print("Contains special character: Yes")
else:
    print("Contains special character: No")
