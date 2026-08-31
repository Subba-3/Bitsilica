# Question 8
# Find items in the second list that were not in the first list.

last_week = ["hide", "seek", "tag"]
this_week = ["hide", "seek", "jump", "run"]

result = set(this_week) - set(last_week)

print(result)
