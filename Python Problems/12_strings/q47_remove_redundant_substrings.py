# Question 47
# Remove repeated copies of a whole word pattern such as hellohello -> hello.

words = ["hellohello", "world", "testtesttest"]
result = []

for word in words:
    found = word

    for size in range(1, len(word) + 1):
        if len(word) % size == 0:
            part = word[:size]
            if part * (len(word) // size) == word:
                found = part
                break

    result.append(found)

print(result)
