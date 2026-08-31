# Question 18
# Rotate an 8-bit number left by k positions.

n = 150
k = 2

result = ((n << k) | (n >> (8 - k))) & 255

print(result)
