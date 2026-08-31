# Question 14
# Swap commas and dots in a string.

text = "23,45.89,78.90"

temp = text.replace(",", "#")
temp = temp.replace(".", ",")
temp = temp.replace("#", ".")

print(temp)
