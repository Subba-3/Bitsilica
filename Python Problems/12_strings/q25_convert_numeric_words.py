# Question 25
# Replace simple number words with digits in a string.

text = "I have one apple and two oranges."

numbers = {
    "zero": "0",
    "one": "1",
    "two": "2",
    "three": "3",
    "four": "4",
    "five": "5",
    "six": "6",
    "seven": "7",
    "eight": "8",
    "nine": "9"
}

words = text.split()
result = []

for word in words:
    clean = word.strip(".,!?")

    if clean.lower() in numbers:
        word = word.replace(clean, numbers[clean.lower()])

    result.append(word)

print(" ".join(result))
