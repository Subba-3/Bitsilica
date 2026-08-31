# Question 18
# Invert a nested student dictionary so subjects are outer keys and students are inside.

d = {
    "john": {"math": 90, "science": 85},
    "jane": {"math": 80, "science": 95}
}

result = {}

for student, subjects in d.items():
    for subject, mark in subjects.items():
        if subject not in result:
            result[subject] = {}
        result[subject][student] = mark

print(result)
