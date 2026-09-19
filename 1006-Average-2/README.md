# Beecrowd 1006 - Average 2

A clean and verified solution for Beecrowd Problem 1006 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1006 |
| **Problem Name** | Average 2 |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads three floating-point numbers representing student exam scores (`A`, `B`, and `C`). It computes the weighted average considering the following weights:
- Grade `A` has weight **2**
- Grade `B` has weight **3**
- Grade `C` has weight **5**
- Total weight sum = **10** ($2 + 3 + 5$)

$$\text{MEDIA} = \frac{(A \times 2) + (B \times 3) + (C \times 5)}{10}$$

**Input Requirements:**
- Three floating-point values read sequentially, each on its own line.

**Output Requirements:**
- Print `MEDIA = ` followed by the calculated weighted average rounded to 1 decimal place (`MEDIA = %.1lf\n`).

---

### Logic & Implementation
1. **Precision Control:** Employs the `double` data type for accurate floating-point arithmetic.
2. **Weight Multiplication:** Directly applies the assigned weight factor to each raw score before aggregation.
3. **Division:** Divides the cumulative weighted sum by the total weight base `10.0`.
4. **Output Formatting:** Uses `printf` with `%.1lf` and a terminating newline to conform to the judge's exact format.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    double grade_a, grade_b, grade_c;

    scanf("%lf", &grade_a);
    grade_a = grade_a * 2.0;

    scanf("%lf", &grade_b);
    grade_b = grade_b * 3.0;

    scanf("%lf", &grade_c);
    grade_c = grade_c * 5.0;

    double average = (grade_a + grade_b + grade_c) / 10.0;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}
```
