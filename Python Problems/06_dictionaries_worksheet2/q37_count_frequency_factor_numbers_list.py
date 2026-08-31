# Question 37
# Count the frequency of each factor for all numbers in a list.

nums = [10, 15]
frequency = {}

for num in nums:
    factor = 1

    while factor <= num:
        if num % factor == 0:
            if factor in frequency:
                frequency[factor] += 1
            else:
                frequency[factor] = 1

        factor += 1

print(frequency)
