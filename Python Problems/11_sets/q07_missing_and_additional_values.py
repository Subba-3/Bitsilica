# Question 7
# Find missing and additional values between old and new lists.

old_hw = ["math", "science", "art"]
new_hw = ["math", "history", "science"]

missing = set(old_hw) - set(new_hw)
additional = set(new_hw) - set(old_hw)

print("missing:", missing)
print("additional:", additional)
