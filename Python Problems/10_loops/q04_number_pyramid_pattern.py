# Question 4
# Print a number pyramid pattern for n rows.

n = 5

for i in range(1, n + 1):
    for j in range(1, i + 1):
        print(j, end="")
    print()
