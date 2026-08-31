# Question 5
# Create a Student class with a shared school_name class attribute.

class Student:
    school_name = "Central High School"

student1 = Student()
student2 = Student()

print(student1.school_name)
print(student2.school_name)
