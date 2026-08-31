# Question 8
# Check whether Bus is a subclass of Vehicle.

class Vehicle:
    pass

class Bus(Vehicle):
    pass

print(issubclass(Bus, Vehicle))
