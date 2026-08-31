# Question 1
# Print all three-digit numbers whose digits' cubes add up to the number.

for num in range(100, 1000):
    temp = num
    total = 0

    while temp > 0:
        digit = temp % 10
        total += digit ** 3
        temp //= 10

    if total == num:
        print(num)
