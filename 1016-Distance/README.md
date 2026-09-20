# Beecrowd 1016 - Distance

A clean and verified solution for Beecrowd Problem 1016 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1016 |
| **Problem Name** | Distance |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
Two cars (X and Y) leave in the same direction. Car X drives at a constant speed of $60\text{ km/h}$ and Car Y drives at a constant speed of $90\text{ km/h}$. 

In one hour ($60\text{ minutes}$), Car Y manages to create a distance of $30\text{ km}$ ahead of Car X (a rate of $1\text{ km}$ every $2\text{ minutes}$). The program reads an arbitrary target separation distance (in km) and calculates how many minutes it takes for Car Y to achieve that distance ahead of Car X.

$$\text{Time (minutes)} = \text{Distance} \times 2$$

**Input Requirements:**
- A single integer value representing the target separation distance in kilometers.

**Output Requirements:**
- Print the necessary time in minutes followed by a space and the word `minutos` (`%i minutos\n`).

---

### Logic & Implementation
1. **Relative Velocity Analysis:** The relative speed difference is $90 - 60 = 30\text{ km/h}$, meaning Car Y pulls away at $\frac{30\text{ km}}{60\text{ min}} = 0.5\text{ km/min}$ ($1\text{ km}$ per $2\text{ minutes}$).
2. **Linear Multiplication:** Multiplies the given distance by $2$ to directly yield elapsed minutes without floating-point division.
3. **Formatted Display:** Prints the resulting integer followed by `minutos` and a terminating newline.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int distance;
    scanf("%i", &distance);

    int time_in_minutes = distance * 2;

    printf("%i minutos\n", time_in_minutes);

    return 0;
}
```
