# Question 11
# Check whether a string contains only 0 and 1.

text = "101101"

if set(text).issubset({"0", "1"}):
    print("Is binary string: Yes")
else:
    print("Is binary string: No")
