# Question 18
# Extend a Stack class with a display method.

class Stack:
    def __init__(self):
        self.items = []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        if len(self.items) == 0:
            return None
        return self.items.pop()

    def display(self):
        print(self.items)

stack = Stack()

stack.push(1)
stack.push(2)

stack.display()
