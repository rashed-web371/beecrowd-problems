# Beecrowd 1007 - Difference

A clean and verified solution for Beecrowd Problem 1007 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1007 |
| **Problem Name** | Difference |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads four integer values: `A`, `B`, `C`, and `D`. It calculates the difference between the product of `A` and `B` and the product of `C` and `D` using the following formula:

$$\text{DIFERENCA} = (A \times B - C \times D)$$

**Input Requirements:**
- Four integer values provided on separate lines via standard input.

**Output Requirements:**
- Print the message `DIFERENCA = ` in uppercase with a single space before and after the equal sign, followed by the calculated difference and a newline character (`\n`).

---

### Logic & Implementation
1. **Input Parsing:** Reads four signed integers sequentially using `scanf` with the `%i` format specifier.
2. **Formula Computation:** Evaluates the product pairs $(a \times b)$ and $(c \times d)$ and calculates their difference into the descriptive variable `difference`.
3. **Formatted Display:** Prints the result using `printf` matching the strict output format (`DIFERENCA = %i\n`).

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%i %i %i %i", &a, &b, &c, &d);

    int difference = (a * b) - (c * d);

    printf("DIFERENCA = %i\n", difference);

    return 0;
}
```
