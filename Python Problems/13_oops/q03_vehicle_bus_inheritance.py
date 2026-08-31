# Question 3
# Create Vehicle and Bus classes and demonstrate inherited behavior.

class Vehicle:
    def move(self):
        print("Vehicle is moving")

class Bus(Vehicle):
    pass

bus = Bus()
bus.move()
