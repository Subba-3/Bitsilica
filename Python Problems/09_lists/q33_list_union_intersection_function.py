# Question 33
# Find the union and intersection of two lists.

def union_intersection(list1, list2):
    union = []

    for item in list1 + list2:
        if item not in union:
            union.append(item)

    intersection = []

    for item in list1:
        if item in list2 and item not in intersection:
            intersection.append(item)

    return union, intersection

union, intersection = union_intersection([1, 2, 3, 4], [3, 4, 5, 6])

print("Union:", union)
print("Intersection:", intersection)
