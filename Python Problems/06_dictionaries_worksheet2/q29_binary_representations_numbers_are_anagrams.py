# Question 29
# Check whether the binary representations of two numbers are anagrams.

num1 = 5
num2 = 6

binary1 = bin(num1)[2:]
binary2 = bin(num2)[2:]

if sorted(binary1) == sorted(binary2):
    print(True)
else:
    print(False)
