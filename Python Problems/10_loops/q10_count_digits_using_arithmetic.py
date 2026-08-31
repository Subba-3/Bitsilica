# Question 10
# Count how many digits an integer contains using loops and arithmetic.

num = 123456
count = 0

if num == 0:
    count = 1
else:
    while num > 0:
        count += 1
        num //= 10

print(count)
