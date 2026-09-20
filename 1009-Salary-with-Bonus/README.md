# Beecrowd 1009 - Salary with Bonus

A clean and verified solution for Beecrowd Problem 1009 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1009 |
| **Problem Name** | Salary with Bonus |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads a seller's first name, their fixed monthly salary, and the total value of sales made during the month. The seller earns a 15% commission on all sales made. The total final pay is computed as:

$$\text{Total Pay} = \text{Fixed Salary} + (\text{Total Sales} \times 0.15)$$

**Input Requirements:**
- A string representing the seller's first name.
- Two double-precision floating-point numbers:
  1. Fixed base salary.
  2. Total value of products sold.

**Output Requirements:**
- Print the total salary to receive preceded by `TOTAL = R$ ` and rounded to two decimal places (`TOTAL = R$ %.2lf\n`).

---

### Logic & Implementation
1. **String Input:** Reads the employee name using `scanf` with `%s`.
2. **Double Precision Floating-Point:** Uses `double` precision variables for financial accuracy across both base salary and total monthly sales.
3. **Commission Calculation:** Multiplies `total_sales` by the 15% factor (`0.15`) and adds the result to `fixed_salary`.
4. **Formatted Display:** Outputs the cumulative salary formatted to two decimal places using `printf` with `%.2lf`.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    char name[30];
    scanf("%s", name);

    double fixed_salary;
    scanf("%lf", &fixed_salary);

    double total_sales;
    scanf("%lf", &total_sales);

    double commission = total_sales * 0.15;
    double total_salary = fixed_salary + commission;

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}
```
