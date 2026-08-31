# Question 6
# Take an error code. Print Critical if >=1000, Warning if 100-999, and Info if <100.

code = 230

if code >= 1000:
    print("Critical")
elif code >= 100:
    print("Warning")
else:
    print("Info")
