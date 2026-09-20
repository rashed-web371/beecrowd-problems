# Beecrowd 1015 - Distance Between Two Points

A clean and verified solution for Beecrowd Problem 1015 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1015 |
| **Problem Name** | Distance Between Two Points |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads the coordinates of two points $P_1(x_1, y_1)$ and $P_2(x_2, y_2)$ in a two-dimensional Cartesian plane and calculates the Euclidean distance between them using the formula:

$$\text{Distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$$

**Input Requirements:**
- Two lines of input, each containing two floating-point values:
  1. `x1` and `y1` representing the first coordinate.
  2. `x2` and `y2` representing the second coordinate.

**Output Requirements:**
- Print the calculated Euclidean distance formatted with 4 decimal places (`%.4lf\n`).

---

### Logic & Implementation
1. **Header Inclusion:** Imports `<math.h>` to access the square root function `sqrt()`.
2. **Precision Management:** Uses `double` precision variables for all coordinate axes and the evaluated distance.
3. **Distance Calculation:** Computes the squared differences $(x_2 - x_1)^2$ and $(y_2 - y_1)^2$, sums them, and extracts the square root.
4. **Formatted Output:** Outputs the final distance using `printf` with `%.4lf` followed by a newline.

---

### Source Code

```c
#include <stdio.h>
#include <math.h>

int main(void) {
    double x1, y1;
    double x2, y2;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    printf("%.4lf\n", distance);

    return 0;
}
```
