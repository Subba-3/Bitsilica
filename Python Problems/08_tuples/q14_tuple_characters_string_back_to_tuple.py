# Question 14
# Convert a tuple of characters to a string and then back to a tuple.
#
# Beginner Python solution

t = ("P", "y", "t", "h", "o", "n")

text = "".join(t)
new_tuple = tuple(text)

print("String:", text)
print("Tuple:", new_tuple)
