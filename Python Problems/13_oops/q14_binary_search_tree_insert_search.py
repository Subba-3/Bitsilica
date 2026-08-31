# Question 14
# Build a simple BST class with insert and search.

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None

class BST:
    def __init__(self):
        self.root = None

    def insert(self, value):
        if self.root is None:
            self.root = Node(value)
            return

        current = self.root

        while True:
            if value < current.value:
                if current.left is None:
                    current.left = Node(value)
                    break
                current = current.left
            else:
                if current.right is None:
                    current.right = Node(value)
                    break
                current = current.right

    def search(self, value):
        current = self.root

        while current is not None:
            if current.value == value:
                return True

            if value < current.value:
                current = current.left
            else:
                current = current.right

        return False

tree = BST()

for num in [8, 3, 10, 1, 5, 9]:
    tree.insert(num)

print(tree.search(5))
