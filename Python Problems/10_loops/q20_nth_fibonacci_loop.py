# Question 20
# Print the nth Fibonacci number using variable updates and a loop.

n = 6

a = 0
b = 1

for i in range(n):
    a, b = b, a + b

print(a)
