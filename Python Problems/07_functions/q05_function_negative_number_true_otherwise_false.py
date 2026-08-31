# Question 5
# Write a function is_negative(number) that returns True if the number is negative, otherwise False.

def is_negative(number):
    if number < 0:
        return True
    else:
        return False

print(is_negative(-7))
print(is_negative(0))
