# Question 25
# Find the minimum number of subsets needed so equal elements are separated.

from collections import Counter

marbles = ["red", "blue", "red", "green", "blue", "red"]

counts = Counter(marbles)

print(max(counts.values()))
