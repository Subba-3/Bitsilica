# Question 7
# Remove all banned spells from a dictionary.

spells = {"fireball": 5, "healing": 10, "curse": 2}
banned = ["curse", "fireball"]

for spell in banned:
    if spell in spells:
        del spells[spell]

print(spells)
