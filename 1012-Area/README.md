# Beecrowd 1012 - Area

A clean and verified solution for Beecrowd Problem 1012 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1012 |
| **Problem Name** | Area |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads three floating-point values: `A`, `B`, and `C`. It then computes and displays the areas of five geometric figures:

1. **Rectangled Triangle:** Base `A` and height `C` $\rightarrow \text{Area} = \frac{A \times C}{2}$
2. **Radius Circle:** Radius `C` ($\pi = 3.14159$) $\rightarrow \text{Area} = \pi \times C^2$
3. **Trapezium:** Bases `A` and `B`, and height `C` $\rightarrow \text{Area} = \frac{(A + B) \times C}{2}$
4. **Square:** Side length `B` $\rightarrow \text{Area} = B^2$
5. **Rectangle:** Side lengths `A` and `B` $\rightarrow \text{Area} = A \times B$

**Input Requirements:**
- Three floating-point values provided on a single line separated by spaces.

**Output Requirements:**
- Five distinct output lines, each showing the figure name followed by a colon, a space, and the calculated area formatted to 3 decimal places:
  - `TRIANGULO: <value>`
  - `CIRCULO: <value>`
  - `TRAPEZIO: <value>`
  - `QUADRADO: <value>`
  - `RETANGULO: <value>`

---

### Logic & Implementation
1. **Multi-Value Extraction:** Reads the three coefficients simultaneously via `scanf("%lf %lf %lf", ...)`.
2. **Double Precision Geometry:** Applies the respective mathematical formulas using `double` variables and decimal floating constants (`2.0`) to avoid integer truncation.
3. **Structured Printing:** Displays each evaluated surface area formatted to three decimal places (`%.3lf\n`).

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    double a, b, c;
    const double pi = 3.14159;

    scanf("%lf %lf %lf", &a, &b, &c);

    double rectangled_triangle = (a * c) / 2.0;
    double circle = pi * (c * c);
    double trapezium = ((a + b) * c) / 2.0;
    double square = b * b;
    double rectangle = a * b;

    printf("TRIANGULO: %.3lf\n", rectangled_triangle);
    printf("CIRCULO: %.3lf\n", circle);
    printf("TRAPEZIO: %.3lf\n", trapezium);
    printf("QUADRADO: %.3lf\n", square);
    printf("RETANGULO: %.3lf\n", rectangle);

    return 0;
}
```
