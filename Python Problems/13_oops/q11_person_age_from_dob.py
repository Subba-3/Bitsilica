# Question 11
# Create a Person class and calculate age from date of birth.

from datetime import date

class Person:
    def __init__(self, name, year, month, day):
        self.name = name
        self.dob = date(year, month, day)

    def age(self, today):
        age = today.year - self.dob.year

        if (today.month, today.day) < (self.dob.month, self.dob.day):
            age -= 1

        return age

person = Person("Alice", 2000, 5, 25)
today = date(2025, 5, 25)

print(person.name, "is", person.age(today), "years old.")
