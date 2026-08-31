# Question 9
# Enter a signal frequency and print Low Band (<1000), Mid Band (1000-9999), High Band (10000-99999), or Out of Range.

frequency = 8000

if frequency < 1000:
    print("Low Band")
elif frequency <= 9999:
    print("Mid Band")
elif frequency <= 99999:
    print("High Band")
else:
    print("Out of Range")
