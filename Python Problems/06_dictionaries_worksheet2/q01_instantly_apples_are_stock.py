# Question 1
# Check instantly whether apples are in stock.

stock = {"apples": 14, "bananas": 22, "rice": 12}
query = "apples"

if query in stock:
    print("Yes, apples are in stock!")
else:
    print("No, apples are not in stock.")
