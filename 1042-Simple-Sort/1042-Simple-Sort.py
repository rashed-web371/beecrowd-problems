# get vlues from user
number_1, number_2, number_3 = map(int, input().split())

# look for smallest value
smallest = 0

if number_1 <= number_2 and number_1 <= number_3:
  smallest = number_1

elif number_2 <= number_1 and number_2 <= number_3:
  smallest = number_2

else:
  smallest = number_3

# look for largest value
largest = 0

if number_1 >= number_2 and number_1 >= number_3:
  largest = number_1

elif number_2 >= number_1 and number_2 >= number_3:
  largest = number_2

else:
  largest = number_3

# look for middle value
middle = (number_1 + number_2 + number_3) - smallest - largest

# print results in ascending order & in the sequence as they were read
print(smallest)
print(middle)
print(largest)
print()
print(number_1)
print(number_2)
print(number_3)
