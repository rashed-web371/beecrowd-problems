import sys

# get 3 values from user
sides = list(map(float, input().split()))

# sort ascending
sides.sort()

# sort descending
sides.sort(reverse=True)

# assign sides
A = sides[0] 
B = sides[1] 
C = sides[2] 

# check if triangle is possible
if A >= B + C:
    print('NAO FORMA TRIANGULO')
    sys.exit()

# check right triangle
elif (A * A) == (B * B) + (C * C):
    print('TRIANGULO RETANGULO')

# check obtuse triangle
elif (A * A) > (B * B) + (C * C):
    print('TRIANGULO OBTUSANGULO')

# check acute triangle
elif (A * A) < (B * B) + (C * C):
    print('TRIANGULO ACUTANGULO')

# check equilateral triangle
if A == B and A == C:
    print('TRIANGULO EQUILATERO')

# check isosceles triangle
elif A == B or A == C or C == B:
    print('TRIANGULO ISOSCELES')
