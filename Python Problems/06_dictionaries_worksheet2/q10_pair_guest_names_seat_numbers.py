# Question 10
# Pair guest names with their seat numbers.

names = ["Alice", "Bob", "Eve"]
seats = [5, 12, 8]

guest_list = {}

for i in range(len(names)):
    guest_list[names[i]] = seats[i]

print(guest_list)
