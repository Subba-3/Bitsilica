# Question 29
# Find how many left rotations are needed to return a string to its original form.

text = "abcde"
current = text
count = 0

while True:
    current = current[1:] + current[0]
    count += 1

    if current == text:
        break

print(count)
