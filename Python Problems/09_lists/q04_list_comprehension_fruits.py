# Question 4
# Use list comprehensions to select fruits containing a, convert fruits to uppercase, and replace banana with orange.

fruits = ["apple", "banana", "cherry", "kiwi", "mango"]

with_a = [fruit for fruit in fruits if "a" in fruit]
upper = [fruit.upper() for fruit in fruits]
changed = ["orange" if fruit == "banana" else fruit for fruit in fruits]

print(with_a)
print(upper)
print(changed)
