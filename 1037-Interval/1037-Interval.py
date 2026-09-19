# get input
value = float(input())

# print invalid input
if value < 0 or value > 100:
    print("Fora de intervalo")
# check the interval
elif 0 <= value <= 25:
    print('Intervalo [0,25]')
elif 25 < value <= 50:
    print('Intervalo (25,50]')
elif 50 < value <= 75:
    print('Intervalo (50,75]')
else:
    print('Intervalo (75,100]')
