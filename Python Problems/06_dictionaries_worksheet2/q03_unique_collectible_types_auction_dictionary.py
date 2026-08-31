# Question 3
# Find the unique collectible types in an auction dictionary.

auction = {"lot1": "coin", "lot2": "stamp", "lot3": "coin", "lot4": "comic"}

unique = []

for value in auction.values():
    if value not in unique:
        unique.append(value)

print(unique)
