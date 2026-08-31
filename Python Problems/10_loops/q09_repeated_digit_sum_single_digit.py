# Question 9
# Keep summing digits until only one digit remains.

num = 9875

while num >= 10:
    total = 0

    while num > 0:
        total += num % 10
        num //= 10

    num = total

print(num)
