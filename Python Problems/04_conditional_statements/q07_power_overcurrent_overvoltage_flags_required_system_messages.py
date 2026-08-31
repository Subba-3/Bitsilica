# Question 7
# Given power_on, overcurrent, and overvoltage flags, print the required system messages.

power_on = True
overcurrent = True
overvoltage = False

if power_on:
    print("System Safe")

if overcurrent:
    print("Shut Down: Overcurrent")

if overvoltage:
    print("Shut Down: Overvoltage")

if overcurrent and overvoltage:
    print("Critical Failure")
