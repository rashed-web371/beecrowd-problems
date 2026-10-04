# get 3 values from user
value_1, value_2, value_3 = map(float,input().split())

# test triangle inequality theorem
if (value_1 + value_2) > value_3 and (value_1 + value_3) > value_2 and (value_2 + value_3) > value_1:

  perimeter = value_1 + value_2 + value_3

  print(f'Perimetro = {perimeter}')
# calculate the area of the trapezium
else:
  trapezium_area = 0.5 * (value_1 + value_2) * value_3
  print(f'Area = {trapezium_area}')
