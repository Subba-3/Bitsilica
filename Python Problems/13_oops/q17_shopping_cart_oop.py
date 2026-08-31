# Question 17
# Create a ShoppingCart class with add, remove, and total methods.

class ShoppingCart:
    def __init__(self):
        self.items = {}

    def add(self, name, quantity, price):
        self.items[name] = [quantity, price]

    def remove(self, name):
        if name in self.items:
            del self.items[name]

    def total(self):
        total = 0

        for quantity, price in self.items.values():
            total += quantity * price

        return total

cart = ShoppingCart()

cart.add("Book", 2, 200)
cart.add("Pen", 5, 20)

print(cart.total())
