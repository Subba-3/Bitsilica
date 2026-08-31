# Question 3
# Enter a temperature and print Overheat (>75C), Normal (25-75C), or Low Temp (<25C).

temperature = 18

if temperature > 75:
    print("Overheat")
elif temperature >= 25:
    print("Normal")
else:
    print("Low Temp")
