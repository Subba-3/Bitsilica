# Question 4
# Find the total number of items in a robot warehouse.

inventory = {"box": 30, "crate": 22, "pallet": 8}

total = 0

for value in inventory.values():
    total += value

print("Total items in warehouse:", total)
