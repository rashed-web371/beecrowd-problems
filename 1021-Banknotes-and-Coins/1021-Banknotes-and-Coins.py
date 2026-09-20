# Read the total monetary amount from standard input
total_amount = float(input())

# Convert to total cents and round to prevent floating-point precision inaccuracies
remaining_cents = round(total_amount * 100)

note_100 = 0
while remaining_cents >= 10000:
    remaining_cents -= 10000
    note_100 += 1

note_50 = 0
while remaining_cents >= 5000:
    remaining_cents -= 5000
    note_50 += 1

note_20 = 0
while remaining_cents >= 2000:
    remaining_cents -= 2000
    note_20 += 1

note_10 = 0
while remaining_cents >= 1000:
    remaining_cents -= 1000
    note_10 += 1

note_5 = 0
while remaining_cents >= 500:
    remaining_cents -= 500
    note_5 += 1

note_2 = 0
while remaining_cents >= 200:
    remaining_cents -= 200
    note_2 += 1

coin_1_00 = 0
while remaining_cents >= 100:
    remaining_cents -= 100
    coin_1_00 += 1

coin_50 = 0
while remaining_cents >= 50:
    remaining_cents -= 50
    coin_50 += 1

coin_25 = 0
while remaining_cents >= 25:
    remaining_cents -= 25
    coin_25 += 1

coin_10 = 0
while remaining_cents >= 10:
    remaining_cents -= 10
    coin_10 += 1

coin_5 = 0
while remaining_cents >= 5:
    remaining_cents -= 5
    coin_5 += 1

coin_1 = 0
while remaining_cents >= 1:
    remaining_cents -= 1
    coin_1 += 1

print("NOTAS:")
print(f"{note_100} nota(s) de R$ 100.00")
print(f"{note_50} nota(s) de R$ 50.00")
print(f"{note_20} nota(s) de R$ 20.00")
print(f"{note_10} nota(s) de R$ 10.00")
print(f"{note_5} nota(s) de R$ 5.00")
print(f"{note_2} nota(s) de R$ 2.00")

print("MOEDAS:")
print(f"{coin_1_00} moeda(s) de R$ 1.00")
print(f"{coin_50} moeda(s) de R$ 0.50")
print(f"{coin_25} moeda(s) de R$ 0.25")
print(f"{coin_10} moeda(s) de R$ 0.10")
print(f"{coin_5} moeda(s) de R$ 0.05")
print(f"{coin_1} moeda(s) de R$ 0.01")
