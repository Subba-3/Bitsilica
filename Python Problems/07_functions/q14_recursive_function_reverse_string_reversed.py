# Question 14
# Write a recursive function reverse_string(s) that returns the reversed string.

def reverse_string(s):
    if len(s) == 0:
        return ""
    else:
        return reverse_string(s[1:]) + s[0]

print(reverse_string("python"))
