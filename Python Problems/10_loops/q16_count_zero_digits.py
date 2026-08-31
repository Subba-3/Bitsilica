# Question 16
# Count how many times zero appears in an integer without strings or lists.

num = 1020300
count = 0

if num == 0:
    count = 1
else:
    while num > 0:
        if num % 10 == 0:
            count += 1
        num //= 10

print(count)
