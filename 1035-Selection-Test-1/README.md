# Beecrowd 1035 - Selection Test 1

A clean and verified solution for Beecrowd Problem 1035 using Python 3.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1035 |
| **Problem Name** | Selection Test 1 |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary
The program reads four integer values: `A`, `B`, `C`, and `D`. It validates a set of logical criteria simultaneously:
- `B` must be strictly greater than `C`.
- `D` must be strictly greater than `A`.
- The sum of `C` and `D` must exceed the sum of `A` and `B` (`C + D > A + B`).
- Both `C` and `D` must be positive integers (`> 0`).
- `A` must be an even integer (`A % 2 == 0`).

**Output Requirements:**
- Print `Valores aceitos` if all conditions evaluate to true.
- Otherwise, print `Valores nao aceitos`.

---

### Logic & Implementation
1. **Multi-variable Input:** Uses `map(int, input().split())` to parse the space-separated integers on a single line cleanly.
2. **Conditional Evaluation:** Combines all validation rules into a single `if` statement using the logical `and` operator, grouped with parentheses for maximum clarity and readability.
3. **Branching:** Executes a simple binary branch to print the exact required status string.

---

### Source Code

```python
a, b, c, d = map(int, input().split())

if (b > c and d > a) and (c + d > a + b) and (c > 0 and d > 0) and (a % 2 == 0):
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
```
