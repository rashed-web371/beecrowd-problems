# Beecrowd 1019 - Time Conversion

A clean and verified solution for Beecrowd Problem 1019 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1019 |
| **Problem Name** | Time Conversion |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads an integer value representing the duration of a certain event in seconds and converts it to the standard format `hours:minutes:seconds`.

**Time Units:**
- 1 hour = 3600 seconds ($60 \times 60$)
- 1 minute = 60 seconds

**Input Requirements:**
- A single integer value representing total seconds.

**Output Requirements:**
- Print the converted time formatted as `hours:minutes:seconds` terminated by a newline character (`\n`).

---

### Logic & Implementation
1. **Input Parsing:** Reads the initial time in seconds using `scanf` into `total_seconds`.
2. **Iterative Reduction:**
   - Extracts complete hours by repeatedly subtracting 3600 seconds while `total_seconds >= 3600`.
   - Extracts remaining minutes by subtracting 60 seconds while `total_seconds >= 60`.
   - Extracts remaining seconds by subtracting 1 second until exhausted.
3. **Formatted Display:** Prints the hours, minutes, and seconds separated by colons matching `%i:%i:%i\n`.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int total_seconds, hours, minutes, seconds;

    scanf("%i", &total_seconds);

    for (hours = 0; total_seconds >= 3600; hours++) {
        total_seconds -= 3600;
    }

    for (minutes = 0; total_seconds >= 60; minutes++) {
        total_seconds -= 60;
    }

    for (seconds = 0; total_seconds >= 1; seconds++) {
        total_seconds -= 1;
    }

    printf("%i:%i:%i\n", hours, minutes, seconds);

    return 0;
}
```
