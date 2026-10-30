# Beecrowd 1045 - Triangle Types

A clean and verified solution for Beecrowd Problem 1045 using Python 3.

---

### Overview

| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1045 |
| **Problem Name** | Triangle Types |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary

The program reads three floating-point numbers ($A, B, C$) representing the side lengths of a potential triangle.

The sides must first be ordered in descending order such that:
$$A \ge B \ge C$$

After sorting, the program determines and prints all valid classifications based on the following geometric criteria:

**Validity & Angle Rules:**
* **$A \ge B + C$:** Print `NAO FORMA TRIANGULO` (No triangle can be formed).
* **$A^2 = B^2 + C^2$:** Print `TRIANGULO RETANGULO` (Right triangle).
* **$A^2 > B^2 + C^2$:** Print `TRIANGULO OBTUSANGULO` (Obtuse triangle).
* **$A^2 < B^2 + C^2$:** Print `TRIANGULO ACUTANGULO` (Acute triangle).

**Side Length Equivalence Rules (Evaluated independently):**
* **$A = B = C$:** Print `TRIANGULO EQUILATERO` (Equilateral triangle).
* **Only two sides are equal:** Print `TRIANGULO ISOSCELES` (Isosceles triangle).

---

### Logic & Implementation

1. **Input Parsing & Ordering:** Reads three floating-point values from a single line into a list and sorts them in descending order so that $A$ holds the largest value.
2. **Early Termination:** If $A \ge B + C$, the values violate the triangle inequality theorem; the program outputs `NAO FORMA TRIANGULO` and terminates execution immediately via `sys.exit()` to avoid superfluous evaluation.
3. **Angle Classification:** Evaluates the Pythagorean relation comparing $A^2$ to $B^2 + C^2$ using an `if / elif` chain to select exactly one angle type.
4. **Side Classification:** Independently checks side equivalence using a secondary conditional block to classify equilateral or isosceles triangles where applicable.

---

### Source Code

```python
import sys

# get 3 numbers
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
```
