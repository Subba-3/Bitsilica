# Question 10
# Generate random strings until a target string is produced.

import random
import string

target = "abc"
attempts = 0

while True:
    result = ""

    for i in range(len(target)):
        result += random.choice(string.ascii_lowercase)

    attempts += 1

    if result == target:
        break

print("Randomly generated", result, "after", attempts, "attempts")
