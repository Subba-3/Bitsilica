# Question 12
# Find the key with the largest value and the key with the smallest value.

valuables = {"ring": 5, "necklace": 9, "watch": 2}

largest_key = None
smallest_key = None

for key, value in valuables.items():
    if largest_key is None or value > valuables[largest_key]:
        largest_key = key
    if smallest_key is None or value < valuables[smallest_key]:
        smallest_key = key

print("Max:", largest_key)
print("Min:", smallest_key)
