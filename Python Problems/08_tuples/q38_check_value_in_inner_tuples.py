# Question 38
# Check if a specified value is present in any of the inner tuples in a tuple of tuples.
#
# Beginner Python solution

t = (("Red", "White", "Blue"), ("Green", "Pink", "Purple"), ("Orange", "Yellow", "Lime"))
value = "White"

found = False

for inner in t:
    if value in inner:
        found = True
        break

print(found)
