# Question 10
# Count vowels in a string using a set.

msg = "hello world"
vowels = {"a", "e", "i", "o", "u"}

count = 0

for ch in msg.lower():
    if ch in vowels:
        count += 1

print(count)
