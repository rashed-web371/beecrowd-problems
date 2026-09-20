# Beecrowd 1011 - Sphere

A clean and verified solution for Beecrowd Problem 1011 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1011 |
| **Problem Name** | Sphere |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads the radius of a sphere and calculates its volume using the geometric formula:

$$\text{Volume} = \left(\frac{4}{3}\right) \times \pi \times \text{radius}^3$$

Where $\pi$ is strictly set to `3.14159`.

**Input Requirements:**
- A single numerical value (integer or floating-point) representing the radius of the sphere.

**Output Requirements:**
- Print the message `VOLUME = ` followed by the calculated volume formatted with 3 digits after the decimal point (`VOLUME = %.3lf\n`).

---

### Logic & Implementation
1. **Floating-Point Division:** Uses `(4.0 / 3)` instead of integer division `(4 / 3)` to preserve the fractional value ($1.3333...$) and prevent truncation to `1`.
2. **Double Precision:** Employs the `double` data type for the radius, the $\pi$ constant, and the resultant volume to maintain high precision across cubic multiplication.
3. **Formatted Display:** Prints the result using `printf` with `%.3lf` and a terminating newline to strictly conform to the presentation specifications.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    double radius;
    scanf("%lf", &radius);

    const double pi = 3.14159;
    double volume = (4.0 / 3) * pi * radius * radius * radius;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
```
