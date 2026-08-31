# Question 31
# For each student, print the name and all subject marks.

students = {
    "Rahul": {"age": 16, "marks": {"math": 90, "english": 88}},
    "Simran": {"age": 15, "marks": {"math": 95, "english": 92}}
}

for name, data in students.items():
    print(name)
    for subject, mark in data["marks"].items():
        print(subject, mark)
