# Beecrowd 1037 - Interval

A clean and verified solution for Beecrowd Problem 1037 using Python 3.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1037 |
| **Problem Name** | Interval |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary
The program reads a single floating-point number and determines which of the following predefined intervals it falls into:
- `[0, 25]` (includes both 0 and 25)
- `(25, 50]` (strictly greater than 25, up to and including 50)
- `(50, 75]` (strictly greater than 50, up to and including 75)
- `(75, 100]` (strictly greater than 75, up to and including 100)

**Output Requirements:**
- If the number belongs to an interval, print the exact interval notation:
  - `Intervalo [0,25]`
  - `Intervalo (25,50]`
  - `Intervalo (50,75]`
  - `Intervalo (75,100]`
- If the number is negative or greater than 100, print:
  - `Fora de intervalo`

---

### Logic & Implementation
1. **Out-of-Bounds Check First:** Checks whether `value < 0 or value > 100` immediately to eliminate invalid inputs and prevent redundant interval comparisons.
2. **Chained Comparison:** Validates the lower and upper bounds of each interval sequentially using `elif` blocks.
3. **Inclusive vs Exclusive Bounds:** Faithfully applies mathematical boundary rules:
   - Square brackets `[` or `]` mean the endpoint is included (`<=` or `>=`).
   - Parentheses `(` mean the endpoint is excluded (`>`).

---

### Source Code

```python
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
```
