# Question 45
# Find all starting positions of a substring.

text = "abracadabra"
sub = "abra"

positions = []
start = 0

while True:
    index = text.find(sub, start)

    if index == -1:
        break

    positions.append(index)
    start = index + 1

print(positions)
