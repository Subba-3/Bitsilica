# Question 16
# Find URLs inside a string.

import re

text = "Check this link: https://openai.com and http://github.com"

urls = re.findall(r"https?://[^\s]+", text)

print("URLs found:", urls)
