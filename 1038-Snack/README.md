# Beecrowd 1038 - Snack

A clean and verified solution for Beecrowd Problem 1038 using Python 3.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1038 |
| **Problem Name** | Snack |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary
The program reads two integers representing a product code and the quantity of that item from a snack bar menu:

| Code | Item | Price |
| :---: | :--- | :---: |
| 1 | Cachorro Quente (Hot Dog) | R$ 4.00 |
| 2 | X-Salada | R$ 4.50 |
| 3 | X-Bacon | R$ 5.00 |
| 4 | Torrada Simples (Toast) | R$ 2.00 |
| 5 | Refrigerante (Soda) | R$ 1.50 |

**Output Requirements:**
- Print the total amount to pay preceded by `Total: R$ ` and formatted with two digits after the decimal point.

---

### Logic & Implementation
1. **Input Parsing:** Reads both the product code and the desired quantity on a single line using `map(int, input().split())`.
2. **Dictionary Lookup:** Uses a Python dictionary mapping each item code to its corresponding unit price.
3. **Calculation:** Multiplies the retrieved unit price by the given quantity.
4. **Formatted Output:** Formats the final price to two decimal places (`:.2f`) using Python f-strings.

---

### Source Code

```python
# asking the user for the code and quantity
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
```
