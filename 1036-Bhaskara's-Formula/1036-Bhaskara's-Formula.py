import math
import sys

def main():
    a, b, c = map(float, input().split())
    discriminant = (b * b) - (4 * a * c)

    if a == 0 or discriminant < 0:
        print('Impossivel calcular')
        sys.exit()

    delta = math.sqrt(discriminant)
    root1 = (-b + delta) / (2 * a)
    root2 = (-b - delta) / (2 * a)

    print(f'R1 = {root1:.5f}')
    print(f'R2 = {root2:.5f}')

main()
