# Question 26
# Create numbers 1 to 20 where even numbers are squared and odd numbers are cubed.

result = []

for num in range(1, 21):
    if num % 2 == 0:
        result.append(num ** 2)
    else:
        result.append(num ** 3)

print(result)
