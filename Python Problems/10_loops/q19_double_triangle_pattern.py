# Question 19
# Print the double triangle pattern shown in the worksheet.

n = 5

for i in range(1, n + 1):
    print(i, end=" ")

    for j in range(i):
        print("*", end=" ")

    print()
