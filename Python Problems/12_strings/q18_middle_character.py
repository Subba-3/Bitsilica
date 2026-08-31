# Question 18
# Print the middle character or characters of a string.

text = "python"
middle = len(text) // 2

if len(text) % 2 == 0:
    print("Middle characters:", text[middle - 1], "and", text[middle])
else:
    print("Middle character:", text[middle])
