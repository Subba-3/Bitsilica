# Question 34
# Sort a tuple of string-float pairs by the float value in descending order.
#
# Beginner Python solution

t = (("item1", "12.20"), ("item2", "15.10"), ("item3", "24.5"))

lst = list(t)

for i in range(len(lst)):
    for j in range(i + 1, len(lst)):
        if float(lst[i][1]) < float(lst[j][1]):
            lst[i], lst[j] = lst[j], lst[i]

print(lst)
