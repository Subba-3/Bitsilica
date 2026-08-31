# Question 5
# Merge the North and South kingdom dictionaries, with South overwriting duplicate keys.

north = {"Winterfell": 1000, "The Eyrie": 800}
south = {"The Eyrie": 1200, "King's Landing": 2500}

kingdom = north.copy()
kingdom.update(south)

print(kingdom)
