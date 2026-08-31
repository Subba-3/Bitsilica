# Question 32
# Find the position of a character in the k-th word.

words = ["hello", "world"]
k = 2
char = "r"

word = words[k - 1]
print("Position:", word.find(char) + 1)
