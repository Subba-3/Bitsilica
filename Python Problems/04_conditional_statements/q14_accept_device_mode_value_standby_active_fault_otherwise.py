# Question 14
# Accept a device mode value: 0 Standby, 1 Active, 2 Fault, otherwise Unknown mode.

mode = 1

if mode == 0:
    print("Standby")
elif mode == 1:
    print("Active")
elif mode == 2:
    print("Fault")
else:
    print("Unknown mode")
