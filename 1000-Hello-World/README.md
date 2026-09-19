# Beecrowd 1000 - Hello World!

A clean and verified solution for Beecrowd Problem 1000 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1000 |
| **Problem Name** | Hello World! |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The introductory problem of the platform. The objective is simply to print the classic greeting message `Hello World!` to the standard output.

**Input Requirements:**
- There is no input for this problem.

**Output Requirements:**
- Print the exact message `Hello World!` followed immediately by a newline (`\n`).

---

### Logic & Implementation
1. **Standard I/O:** Includes the `<stdio.h>` header to gain access to standard input and output functions.
2. **String Display:** Calls `printf()` passing the target string and ensures the inclusion of the required trailing newline character `\n`.
3. **Program Termination:** Returns status code `0` from `main` to indicate successful execution to the operating system and the judge.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    printf("Hello World!\n");
    return 0;
}
```
