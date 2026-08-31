# Question 6
# Write a function grade(score) that returns A, B, C, or F according to the given ranges.

def grade(score):
    if score >= 90:
        return "A"
    elif score >= 80:
        return "B"
    elif score >= 70:
        return "C"
    else:
        return "F"

print(grade(85))
print(grade(72))
print(grade(50))
