# Question 24
# Generate all subsets of a given size from a set.

from itertools import combinations

kids = {"Amy", "Bob", "Cara", "Dan", "Eva"}
size = 3

for group in combinations(kids, size):
    print(group)
