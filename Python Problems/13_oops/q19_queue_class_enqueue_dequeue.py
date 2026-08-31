# Question 19
# Build a Queue class with enqueue and dequeue methods.

class Queue:
    def __init__(self):
        self.items = []

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        if len(self.items) == 0:
            return None
        return self.items.pop(0)

queue = Queue()

queue.enqueue(10)
queue.enqueue(20)

print(queue.dequeue())
