# Question 36
# Build a scoring matrix for students and subjects using a dictionary.

students = ["A", "B"]
subjects = ["math", "sci"]
scores = [[90, 80], [85, 95]]

result = {}

for i in range(len(students)):
    result[students[i]] = {}

    for j in range(len(subjects)):
        result[students[i]][subjects[j]] = scores[i][j]

print(result)
