# Question 21
# Convert a set into a dictionary by assigning numbers to items.

pets = {"dog", "cat", "fish"}

result = {}

for i, pet in enumerate(pets):
    result[pet] = i

print(result)
