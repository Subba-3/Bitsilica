# Question 24
# Generate valid IP addresses from a string of digits.

text = "25525511135"
result = []

for i in range(1, 4):
    for j in range(i + 1, i + 4):
        for k in range(j + 1, j + 4):
            if k >= len(text):
                continue

            parts = [text[:i], text[i:j], text[j:k], text[k:]]

            valid = True

            for part in parts:
                if len(part) > 1 and part[0] == "0":
                    valid = False
                elif int(part) > 255:
                    valid = False

            if valid:
                result.append(".".join(parts))

print(result)
