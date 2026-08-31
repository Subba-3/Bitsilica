# Question 1
# Given a voltage reading, print Under Voltage, Nominal, or Over Voltage. Nominal is between 3.0V and 3.3V inclusive.

voltage = 3.35

if voltage < 3.0:
    print("Under Voltage")
elif voltage <= 3.3:
    print("Nominal")
else:
    print("Over Voltage")
