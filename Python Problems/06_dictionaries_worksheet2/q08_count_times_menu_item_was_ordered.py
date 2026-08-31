# Question 8
# Count how many times each menu item was ordered.

orders = ["latte", "espresso", "latte", "tea", "espresso", "latte"]
menu = {}

for item in orders:
    if item in menu:
        menu[item] += 1
    else:
        menu[item] = 1

print(menu)
