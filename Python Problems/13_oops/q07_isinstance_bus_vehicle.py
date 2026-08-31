# Question 7
# Check whether a Bus object is an instance of Vehicle.

class Vehicle:
    pass

class Bus(Vehicle):
    pass

bus = Bus()

print(isinstance(bus, Vehicle))
