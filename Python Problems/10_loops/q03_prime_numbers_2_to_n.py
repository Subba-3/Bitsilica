# Question 3
# Print all prime numbers between 2 and n using loops.

n = 30

for num in range(2, n + 1):
    prime = True

    for divisor in range(2, num):
        if num % divisor == 0:
            prime = False
            break

    if prime:
        print(num)
