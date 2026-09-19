# Beecrowd 1002 - Area of a Circle

A clean and verified solution for Beecrowd Problem 1002 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1002 |
| **Problem Name** | Area of a Circle |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads the radius of a circle and calculates its corresponding area using the standard geometric formula:

$$\text{Area} = \pi \times \text{radius}^2$$

Where $\pi$ is strictly set to `3.14159`.

**Input Requirements:**
- A single floating-point number (double precision) representing the radius.

**Output Requirements:**
- Print the letter `A` followed immediately by `=` (without spaces) and the calculated area formatted to four decimal places (`A=%.4lf\n`).

---

### Logic & Implementation
1. **Precision Considerations:** Uses `double` precision floating-point types for both the radius and the area to avoid rounding discrepancies.
2. **Mathematical Computation:** Multiplies the given constant `pi` (`3.14159`) by `radius * radius`.
3. **Formatted Display:** Prints the result using `printf` with `%.4lf` and a terminating newline to strictly conform to the presentation specification.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    const double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);

    double area = pi * radius * radius;

    printf("A=%.4lf\n", area);

    return 0;
}
```
