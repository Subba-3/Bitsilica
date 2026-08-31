# Question 5
# If a sensor value is outside 100-900, print Sensor Fault. Otherwise print Sensor OK.

sensor = 950

if sensor < 100 or sensor > 900:
    print("Sensor Fault")
else:
    print("Sensor OK")
