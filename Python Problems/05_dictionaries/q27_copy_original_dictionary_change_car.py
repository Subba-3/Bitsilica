# Question 27
# Copy an original dictionary, change car in the copy, and print both.

original = {"car": "red", "bike": "blue"}
copy_data = original.copy()

copy_data["car"] = "green"

print(original)
print(copy_data)
