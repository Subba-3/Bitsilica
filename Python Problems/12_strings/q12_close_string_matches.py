# Question 12
# Find close matches for a target word in a list.

from difflib import get_close_matches

target = "apple"
words = ["apply", "apples", "ape", "maple"]

result = get_close_matches(target, words)

print("Close matches:", result)
