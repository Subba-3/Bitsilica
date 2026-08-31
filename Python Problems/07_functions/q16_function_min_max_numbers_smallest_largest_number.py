# Question 16
# Write a function min_max(numbers) that returns both the smallest and largest number.

def min_max(numbers):
    small = numbers[0]
    large = numbers[0]

    for num in numbers:
        if num < small:
            small = num

        if num > large:
            large = num

    return small, large

small, large = min_max([8, 3, 5, 2, 10])

print("Smallest:", small)
print("Largest:", large)
