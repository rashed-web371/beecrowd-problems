# Beecrowd 1004 - Simple Product

A clean and verified solution for Beecrowd Problem 1004 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1004 |
| **Problem Name** | Simple Product |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads two integer values, calculates their mathematical product (multiplication), and assigns the result to the variable `PROD`.

**Input Requirements:**
- Two integer values provided on separate lines via standard input.

**Output Requirements:**
- Print the message `PROD = ` in uppercase with a blank space before and after the equal sign, followed by the calculated product.
- Ensure the line concludes with a standard newline character (`\n`).

---

### Logic & Implementation
1. **Input Acquisition:** Reads both signed integers sequentially using standard `scanf` calls.
2. **Multiplication:** Computes the product using the arithmetic operator `*` into an integer variable (`product`).
3. **Formatted Printing:** Calls `printf` matching the exact string template `PROD = %i\n`.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int first_factor, second_factor;

    scanf("%i", &first_factor);
    scanf("%i", &second_factor);

    int product = first_factor * second_factor;

    printf("PROD = %i\n", product);

    return 0;
}
```
