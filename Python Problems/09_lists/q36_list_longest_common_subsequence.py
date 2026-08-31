# Question 36
# Find the longest common subsequence between two lists.

a = [1, 3, 4, 1, 2, 3, 4, 1]
b = [3, 4, 1, 2, 1, 3]

dp = [[[] for j in range(len(b) + 1)] for i in range(len(a) + 1)]

for i in range(1, len(a) + 1):
    for j in range(1, len(b) + 1):
        if a[i - 1] == b[j - 1]:
            dp[i][j] = dp[i - 1][j - 1] + [a[i - 1]]
        else:
            if len(dp[i - 1][j]) >= len(dp[i][j - 1]):
                dp[i][j] = dp[i - 1][j]
            else:
                dp[i][j] = dp[i][j - 1]

print(dp[-1][-1])
