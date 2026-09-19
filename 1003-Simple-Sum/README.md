# Beecrowd 1003 - Simple Sum

A clean and verified solution for Beecrowd Problem 1003 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1003 |
| **Problem Name** | Simple Sum |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads two integer values, calculates their arithmetic sum, and assigns the result to the variable `SOMA`.

**Input Requirements:**
- Two integer values provided on separate lines via standard input.

**Output Requirements:**
- Print the message `SOMA = ` in uppercase with a blank space before and after the equal sign, followed by the calculated sum.
- Ensure the line concludes with a standard newline character (`\n`).

---

### Logic & Implementation
1. **Input Acquisition:** Reads both signed integers sequentially using standard `scanf` calls.
2. **Summation:** Computes the total using the basic addition operator `+` into an integer variable (`sum`).
3. **Formatted Printing:** Calls `printf` matching the exact string template `SOMA = %i\n`.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int first_number, second_number;

    scanf("%i", &first_number);
    scanf("%i", &second_number);

    int sum = first_number + second_number;

    printf("SOMA = %i\n", sum);

    return 0;
}
```
