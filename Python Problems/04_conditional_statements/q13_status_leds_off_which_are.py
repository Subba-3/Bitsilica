# Question 13
# Given the status of three LEDs (on/off as 1/0), print which LEDs are ON. If all are off, print All LEDs off.

led1 = 0
led2 = 1
led3 = 0

if led1 == 1:
    print("LED1 ON")
if led2 == 1:
    print("LED2 ON")
if led3 == 1:
    print("LED3 ON")

if led1 == 0 and led2 == 0 and led3 == 0:
    print("All LEDs off")
