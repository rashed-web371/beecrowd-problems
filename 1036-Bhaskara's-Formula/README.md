# Beecrowd 1036 - Bhaskara's Formula

A clean and verified solution for Beecrowd Problem 1036 using Python 3.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1036 |
| **Problem Name** | Bhaskara's Formula |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary
The program reads three floating-point numbers: `A`, `B`, and `C`. It calculates the roots of the quadratic equation $Ax^2 + Bx + C = 0$ using Bhaskara's formula:

$$x = \frac{-B \pm \sqrt{B^2 - 4AC}}{2A}$$

**Constraints & Impossible Cases:**
- The coefficient `A` cannot be zero ($A = 0$), as division by zero is undefined.
- The discriminant ($B^2 - 4AC$) cannot be negative ($< 0$), as real roots do not exist.

**Output Requirements:**
- If calculation is impossible, print `Impossivel calcular`.
- Otherwise, print both roots formatted to 5 decimal places:
  - `R1 = <value>`
  - `R2 = <value>`

---

### Logic & Implementation
1. **Input Parsing:** Reads space-separated floating-point values via `map(float, input().split())`.
2. **Discriminant Validation:** Computes $B^2 - 4AC$ into `discriminant`. If `a == 0` or `discriminant < 0`, it prints the impossibility notice and exits immediately.
3. **Root Calculation:** Computes the square root of the discriminant using `math.sqrt()`, then calculates both roots (`root1` and `root2`).
4. **Precision Formatting:** Prints both results using Python f-strings formatted to 5 decimal places (`:.5f`).

---

### Source Code

```python
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
```
