# Question 15
# Enter two analog readings. Print Match if they are within 5 units of each other, otherwise No Match.

a = 98
b = 101

if abs(a - b) <= 5:
    print("Match")
else:
    print("No Match")
