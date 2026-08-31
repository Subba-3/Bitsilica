# Question 10
# Given three sensor readings, print Majority High if at least two readings are above a threshold of 50; otherwise Majority Low.

a = 40
b = 65
c = 70
threshold = 50

count = 0

if a > threshold:
    count += 1
if b > threshold:
    count += 1
if c > threshold:
    count += 1

if count >= 2:
    print("Majority High")
else:
    print("Majority Low")
