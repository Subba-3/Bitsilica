# Question 29
# Find the length of the longest increasing subsequence.

numbers = [10, 22, 9, 33, 21, 50, 41, 60, 80]

lengths = [1] * len(numbers)

for i in range(len(numbers)):
    for j in range(i):
        if numbers[j] < numbers[i] and lengths[j] + 1 > lengths[i]:
            lengths[i] = lengths[j] + 1

print(max(lengths))
