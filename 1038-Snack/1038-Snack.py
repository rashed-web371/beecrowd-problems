# asking the user for item code and quantity
item_code, quantity = map(int, input().split())

# setting the price table
prices = {
    1: 4.00,
    2: 4.50,
    3: 5.00,
    4: 2.00,
    5: 1.50
}

# calculate total cost
result = prices[item_code] * quantity

# print the output
print(f'Total: R$ {result:.2f}')
