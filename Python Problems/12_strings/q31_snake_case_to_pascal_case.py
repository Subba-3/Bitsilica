# Question 31
# Convert snake_case to PascalCase.

text = "my_variable_name"

parts = text.split("_")
result = ""

for part in parts:
    result += part.capitalize()

print(result)
