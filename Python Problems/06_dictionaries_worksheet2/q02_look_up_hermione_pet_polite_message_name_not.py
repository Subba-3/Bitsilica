# Question 2
# Look up Hermione's pet and print a polite message if the name is not registered.

pets = {"Harry": "owl", "Ron": "rat"}
name = "Hermione"

if name in pets:
    print(pets[name])
else:
    print("No record, maybe try another student!")
