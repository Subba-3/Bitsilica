# Question 24
# Print only subjects with marks above 60.

scores = {"math": 75, "science": 55, "english": 82}

for subject, mark in scores.items():
    if mark > 60:
        print(subject)
