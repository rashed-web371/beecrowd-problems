# asking the user for amount of money
money = float(input())
# Rounding to prevent floating-point precision issues
cents = round(money * 100)

note_100 = 0
while cents >= 10000:
    cents -= 10000
    note_100 += 1

note_50 = 0
while cents >= 5000:
    cents -= 5000
    note_50 += 1

note_20 = 0
while cents >= 2000:
    cents -= 2000
    note_20 += 1

note_10 = 0
while cents >= 1000:
    cents -= 1000
    note_10 += 1

note_5 = 0
while cents >= 500:
    cents -= 500
    note_5 += 1

note_2 = 0
while cents >= 200:
    cents -= 200
    note_2 += 1

coin_100 = 0
while cents >= 100:
    cents -= 100
    coin_100 += 1

coin_50 = 0
while cents >= 50:
    cents -= 50
    coin_50 += 1

coin_25 = 0
while cents >= 25:
    cents -= 25
    coin_25 += 1

coin_10 = 0
while cents >= 10:
    cents -= 10
    coin_10 += 1

coin_5 = 0
while cents >= 5:
    cents -= 5
    coin_5 += 1

coin_1 = 0
while cents >= 1:
    cents -= 1
    coin_1 += 1

print('NOTAS:')
print(f'{note_100} nota(s) de R$ 100.00')
print(f'{note_50} nota(s) de R$ 50.00')
print(f'{note_20} nota(s) de R$ 20.00')
print(f'{note_10} nota(s) de R$ 10.00')
print(f'{note_5} nota(s) de R$ 5.00')
print(f'{note_2} nota(s) de R$ 2.00')

print('MOEDAS:')
print(f'{coin_100} moeda(s) de R$ 1.00')
print(f'{coin_50} moeda(s) de R$ 0.50')
print(f'{coin_25} moeda(s) de R$ 0.25')
print(f'{coin_10} moeda(s) de R$ 0.10')
print(f'{coin_5} moeda(s) de R$ 0.05')
print(f'{coin_1} moeda(s) de R$ 0.01')
