# Beecrowd 1001 - Extremely Basic

A clean and verified solution for Beecrowd Problem 1001 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1001 |
| **Problem Name** | Extremely Basic |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads two integer variables, calculates their arithmetic sum, and prints the result assigned to the variable `X`.

**Input Requirements:**
- Two integer values read from standard input on separate lines.

**Output Requirements:**
- Print the letter `X` in uppercase, followed by a space, the equals sign `=`, another space, and the calculated sum (`X = <sum>`).
- Must terminate with a newline character (`\n`).

---

### Logic & Implementation
1. **Input Reading:** Reads two signed integers (`first_number` and `second_number`) sequentially using `scanf` with the `%i` format specifier.
2. **Arithmetic Addition:** Adds both numbers and stores the result inside a descriptive variable (`sum`).
3. **Formatted Display:** Prints the result using `printf` matching the strict whitespace rules (`X = %i\n`).

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int first_number, second_number;
    
    scanf("%i", &first_number);
    scanf("%i", &second_number);

    int sum = first_number + second_number;

    printf("X = %i\n", sum);
    return 0;
}
```
