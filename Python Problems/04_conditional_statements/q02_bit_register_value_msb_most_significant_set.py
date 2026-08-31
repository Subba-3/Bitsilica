# Question 2
# Take an 8-bit register value and print whether the MSB (most significant bit) is set.

value = 0b10010010

if value & 0b10000000:
    print("MSB set")
else:
    print("MSB not set")
