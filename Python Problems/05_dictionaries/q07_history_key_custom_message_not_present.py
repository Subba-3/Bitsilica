# Question 7
# Safely access the history key and print a custom message if it is not present.

scores = {"math": 80, "science": 90}

if "history" in scores:
    print(scores["history"])
else:
    print("Not found")
