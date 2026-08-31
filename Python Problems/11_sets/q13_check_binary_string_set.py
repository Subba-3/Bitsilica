# Question 13
# Check whether a string contains only 0 and 1.

note = "101010"

if set(note).issubset({"0", "1"}):
    print("Yes")
else:
    print("No")
