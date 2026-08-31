# Question 39
# Check whether a password meets length, digit, uppercase, lowercase, and special-character rules.

password = "MyPass123@"

has_upper = False
has_lower = False
has_digit = False
has_special = False

for ch in password:
    if ch.isupper():
        has_upper = True
    elif ch.islower():
        has_lower = True
    elif ch.isdigit():
        has_digit = True
    else:
        has_special = True

if len(password) >= 8 and has_upper and has_lower and has_digit and has_special:
    print("Valid password: Yes")
else:
    print("Valid password: No")
