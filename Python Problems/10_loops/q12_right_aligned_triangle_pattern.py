# Question 12
# Print a right-aligned triangle pattern for n rows.

n = 5

for i in range(1, n + 1):
    for j in range(n - i):
        print(" ", end="")
    for j in range(i):
        print("*", end="")
    print()
