# Question 1
# Create a Note class with title and content instance attributes and print two notes.

class Note:
    def __init__(self, title, content):
        self.title = title
        self.content = content

    def display(self):
        print(self.title, ":", self.content)

note1 = Note("Meeting Notes", "Discuss project status with team.")
note2 = Note("Grocery List", "Eggs, Milk, Bread")

note1.display()
note2.display()
