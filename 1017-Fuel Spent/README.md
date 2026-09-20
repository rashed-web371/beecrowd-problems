# Beecrowd 1017 - Fuel Spent

A clean and verified solution for Beecrowd Problem 1017 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1017 |
| **Problem Name** | Fuel Spent |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
Little John wants to calculate and display the amount of fuel spent on a car trip. The car gets $12\text{ km/L}$ of fuel efficiency. 

Given the spent time in the trip (in hours) and the average speed during the trip (in km/h), the program calculates the total distance and computes the necessary fuel liters:

$$\text{Distance} = \text{Time} \times \text{Speed}$$
$$\text{Fuel Spent} = \frac{\text{Distance}}{12.0}$$

**Input Requirements:**
- Two integers provided on separate lines:
  1. The spent time in hours.
  2. The average speed in km/h.

**Output Requirements:**
- Print the amount of fuel spent formatted with 3 decimal places (`%.3lf\n`).

---

### Logic & Implementation
1. **Input Reading:** Reads the trip duration (`spent_time`) and mean velocity (`average_speed`) via `scanf("%i %i", ...)`.
2. **Distance Calculation:** Computes total travel distance using standard rectilinear kinematics ($d = v \times t$).
3. **Double Precision Division:** Divides the integer distance by the floating-point constant `12.0` to preserve fractional accuracy into `spent_fuel`.
4. **Formatted Display:** Outputs the fuel amount using `printf` with `%.3lf` followed by a terminating newline.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int spent_time, average_speed;

    scanf("%i %i", &spent_time, &average_speed);

    int total_distance = spent_time * average_speed;
    
    // The car achieves 12.0 km/l fuel efficiency
    double spent_fuel = total_distance / 12.0;

    printf("%.3lf\n", spent_fuel);

    return 0;
}
```
