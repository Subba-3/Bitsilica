# Question 12
# Given a voltage and current reading, print Power OK if both are safe; otherwise print the specific error.

voltage = 3.2
current = 20

if voltage < 3.0 or voltage > 3.3:
    print("Voltage error")
elif current < 10 or current > 500:
    print("Current Error")
else:
    print("Power OK")
