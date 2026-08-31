# Question 14
# Add a status key with value active only if it does not already exist.

user = {"name": "Riya"}

if "status" not in user:
    user["status"] = "active"

print(user)
