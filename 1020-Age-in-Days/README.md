# Beecrowd 1020 - Age in Days

A clean and verified solution for Beecrowd Problem 1020 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1020 |
| **Problem Name** | Age in Days |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads an integer value representing a person's age in days and expresses it in terms of years, months, and days.

**Assumptions Specified by Problem:**
- 1 year = 365 days
- 1 month = 30 days

**Input Requirements:**
- A single integer value representing the total age in days.

**Output Requirements:**
- Print three separate lines formatted exactly as:
  - `<years> ano(s)`
  - `<months> mes(es)`
  - `<days> dia(s)`
- Each line must conclude with a newline character (`\n`).

---

### Logic & Implementation
1. **Input Parsing:** Reads the initial age using `scanf` with `%i` into `age_in_days`.
2. **Iterative Reduction:**
   - Increments `years` while subtracting 365 days from `age_in_days` until less than 365 remain.
   - Increments `months` while subtracting 30 days from the remainder until less than 30 remain.
   - Increments `days` for each remaining single day.
3. **Formatted Display:** Outputs the decomposed time intervals matching the Portuguese singular/plural labels (`ano(s)`, `mes(es)`, `dia(s)`).

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int age_in_days, years, months, days;

    scanf("%i", &age_in_days);

    for (years = 0; age_in_days >= 365; years++) {
        age_in_days -= 365;
    }

    for (months = 0; age_in_days >= 30; months++) {
        age_in_days -= 30;
    }

    for (days = 0; age_in_days >= 1; days++) {
        age_in_days -= 1;
    }

    printf("%i ano(s)\n", years);
    printf("%i mes(es)\n", months);
    printf("%i dia(s)\n", days);

    return 0;
}
```
