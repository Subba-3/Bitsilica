# Question 6
# Rename coded keys using a mapping dictionary.

codes = {"alpha": "ok", "beta": "wait"}
new_labels = {"alpha": "red", "beta": "blue"}

result = {}

for key, value in codes.items():
    result[new_labels[key]] = value

print(result)
