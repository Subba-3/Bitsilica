# Question 36
# Check whether two strings are rotations of each other.

a = "abcde"
b = "cdeab"

if len(a) == len(b) and b in a + a:
    print("Rotationally equivalent: Yes")
else:
    print("Rotationally equivalent: No")
