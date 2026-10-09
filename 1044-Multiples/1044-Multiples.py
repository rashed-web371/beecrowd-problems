# get 2 numbers from user
number_1, number_2 = map(int, input().split())

# find largest and smallest numbers
largest = 0
smallest = 0
if number_1 > number_2:
  largest = number_1
  smallest = number_2
else:
  largest = number_2
  smallest = number_1

# check if two numbers are multiples and print the result
if largest % smallest == 0:
  print('Sao Multiplos')
else:
  print('Nao sao Multiplos')
