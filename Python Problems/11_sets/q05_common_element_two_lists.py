# Question 5
# Check whether two lists have at least one common element.

my_favs = ["Tom", "Jerry", "Ben 10"]
friend_favs = ["Powerpuff", "Jerry", "Scooby"]

common = set(my_favs) & set(friend_favs)

if common:
    print("Yes!", common)
else:
    print("No common element")
