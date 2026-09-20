# Beecrowd 1013 - The Greatest

A clean and verified solution for Beecrowd Problem 1013 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1013 |
| **Problem Name** | The Greatest |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads three integer values and identifies the greatest among them using the mathematical formula:

$$\text{MaiorAB} = \frac{a + b + \text{abs}(a - b)}{2}$$

**Input Requirements:**
- Three integer values provided on a single line separated by a space.

**Output Requirements:**
- Print the greatest value followed by a space and the string `eh o maior` (`<value> eh o maior\n`).

---

### Logic & Implementation
1. **Header Inclusion:** Includes `<stdlib.h>` to utilize the `abs()` function for computing the absolute difference between values.
2. **Sequential Pairwise Comparison:** 
   - First calculates the maximum between `value_1` and `value_2` into `max_ab`.
   - Then computes the maximum between the result `max_ab` and the third value `value_3` into `max_all`.
3. **Formatted Display:** Outputs the greatest integer followed strictly by `eh o maior` and a newline.

---

### Source Code

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int value_1, value_2, value_3;
    scanf("%i %i %i", &value_1, &value_2, &value_3);

    int max_ab = (value_1 + value_2 + abs(value_1 - value_2)) / 2;
    int max_all = (max_ab + value_3 + abs(value_3 - max_ab)) / 2;

    printf("%i eh o maior\n", max_all);

    return 0;
}
```
