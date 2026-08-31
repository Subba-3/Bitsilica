# Question 12
# Check if a number is a power of two using a single Boolean expression.

n = 32

print(n > 0 and (n & (n - 1)) == 0)
