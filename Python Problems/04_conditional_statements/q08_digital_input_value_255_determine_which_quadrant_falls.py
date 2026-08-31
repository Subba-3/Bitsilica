# Question 8
# Given a digital input value (0-255), determine which quadrant it falls into: 0-63, 64-127, 128-191, 192-255.

value = 150

if value <= 63:
    print("Quadrant 1")
elif value <= 127:
    print("Quadrant 2")
elif value <= 191:
    print("Quadrant 3")
else:
    print("Quadrant 4")
