# Beecrowd 1005 - Average 1

A clean and verified solution for Beecrowd Problem 1005 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1005 |
| **Problem Name** | Average 1 |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads two floating-point values representing student exam grades (`A` and `B`). It calculates the student's weighted average knowing that grade `A` has a weight of 3.5 and grade `B` has a weight of 7.5 (sum of weights = 11.0).

$$\text{MEDIA} = \frac{(A \times 3.5) + (B \times 7.5)}{11}$$

**Input Requirements:**
- Two floating-point numbers with one digit after the decimal point, read sequentially from standard input.

**Output Requirements:**
- Print the message `MEDIA = ` followed by the calculated weighted average rounded to 5 decimal places (`MEDIA = %.5lf\n`).

---

### Logic & Implementation
1. **Precision Management:** Declares variables using `double` precision to maintain high floating-point accuracy across arithmetic operations.
2. **Weight Multiplication:** Multiplies each raw score by its respective weight factor (`3.5` and `7.5`).
3. **Normalized Division:** Divides the accumulated weighted sum by the total weight factor `11.0`.
4. **Formatted Printing:** Outputs the final score using `printf` formatted with `%.5lf` and a terminating newline.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    double grade_a;
    scanf("%lf", &grade_a);
    double weighted_grade_a = grade_a * 3.5;

    double grade_b;
    scanf("%lf", &grade_b);
    double weighted_grade_b = grade_b * 7.5;

    double average = (weighted_grade_a + weighted_grade_b) / 11.0;

    printf("MEDIA = %.5lf\n", average);
    return 0;
}
```
