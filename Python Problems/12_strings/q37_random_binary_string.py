# Question 37
# Generate a random binary string of a given length.

import random

length = 8
result = ""

for i in range(length):
    result += str(random.randint(0, 1))

print(result)
