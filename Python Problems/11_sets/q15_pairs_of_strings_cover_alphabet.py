# Question 15
# Find pairs of strings from two sets whose combined letters cover all 26 alphabet letters.

import string

A = {"abc", "defg", "xyz"}
B = {"mnopq", "rstuv", "wxyz"}

alphabet = set(string.ascii_lowercase)

for a in A:
    for b in B:
        letters = set(a + b)

        if letters == alphabet:
            print(a, b)
