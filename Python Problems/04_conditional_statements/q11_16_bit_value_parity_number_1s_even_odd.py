# Question 11
# Enter a 16-bit value and print whether parity (number of 1s) is even or odd.

value = 0xAAAA

count = 0

for i in range(16):
    if value & (1 << i):
        count += 1

if count % 2 == 0:
    print("Parity: Even")
else:
    print("Parity: Odd")
