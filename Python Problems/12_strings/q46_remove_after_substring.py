# Question 46
# Remove everything after a given substring, keeping the substring.

text = "abcdeFGhiJK"
sub = "FG"

index = text.find(sub)

if index != -1:
    result = text[:index + len(sub)]
else:
    result = text

print(result)
