# Question 5
# Print the digits of an integer in reverse order without strings or slicing.

num = 12345

while num > 0:
    digit = num % 10
    print(digit, end="")
    num //= 10

print()
