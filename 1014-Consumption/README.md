# Beecrowd 1014 - Consumption

A clean and verified solution for Beecrowd Problem 1014 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1014 |
| **Problem Name** | Consumption |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads an integer representing the total distance traveled by a car (in km) and a floating-point number representing the total volume of spent fuel (in liters). It calculates the car's average fuel consumption using the formula:

$$\text{Consumption} = \frac{\text{Total Distance}}{\text{Spent Fuel}}$$

**Input Requirements:**
- Two values provided on separate lines:
  1. An integer `total_distance` (total km traveled).
  2. A floating-point number `spent_fuel` (liters of fuel spent).

**Output Requirements:**
- Print the calculated consumption followed by a space and `km/l`, formatted with 3 decimal places (`%.3lf km/l\n`).

---

### Logic & Implementation
1. **Input Acquisition:** Reads the integer distance using `%i` and the floating-point fuel volume using `%lf`.
2. **Double Precision Calculation:** Computes the division between distance and fuel volume into a `double` variable (`consumption`) to retain fractional accuracy.
3. **Formatted Output:** Prints the consumption rate formatted strictly to three decimal places followed by `km/l` and a newline.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int total_distance;
    double spent_fuel;

    scanf("%i", &total_distance);
    scanf("%lf", &spent_fuel);

    double consumption = total_distance / spent_fuel;

    printf("%.3lf km/l\n", consumption);

    return 0;
}
```
