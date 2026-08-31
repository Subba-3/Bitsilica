# Question 15
# Illustrate mutable and immutable objects with an example.

a = [1, 2, 3]
b = a

a[0] = 10

print(a)
print(b)

x = 10
y = x

x = 20

print(x)
print(y)
