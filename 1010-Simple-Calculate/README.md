# Beecrowd 1010 - Simple Calculate

A clean and verified solution for Beecrowd Problem 1010 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1010 |
| **Problem Name** | Simple Calculate |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads the code, the number of units, and the unit price of two distinct products. It then calculates the total monetary value to be paid using the formula:

$$\text{Total to Pay} = (\text{Units}_1 \times \text{Price}_1) + (\text{Units}_2 \times \text{Price}_2)$$

**Input Requirements:**
- Two separate lines of input.
- Each line contains:
  1. An integer for the product code.
  2. An integer for the quantity/units.
  3. A floating-point number representing the unit price.

**Output Requirements:**
- Print the message `VALOR A PAGAR: R$ ` followed by the calculated sum rounded to two decimal places (`VALOR A PAGAR: R$ %.2lf\n`).

---

### Logic & Implementation
1. **Multi-Field Input Parsing:** Uses `scanf` with `%i %i %lf` per line to capture the code, quantity, and unit price in a single step.
2. **Double Precision:** Employs `double` precision variables for prices and totals to maintain standard financial numerical accuracy.
3. **Compound Arithmetic:** Multiplies unit counts by unit prices for each product, aggregates them into `total_to_pay`, and formats the output to two decimal places.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int product_code_1, units_1;
    double product_price_1;

    int product_code_2, units_2;
    double product_price_2;

    scanf("%i %i %lf", &product_code_1, &units_1, &product_price_1);
    scanf("%i %i %lf", &product_code_2, &units_2, &product_price_2);

    double total_to_pay = (units_1 * product_price_1) + (units_2 * product_price_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total_to_pay);

    return 0;
}
```
