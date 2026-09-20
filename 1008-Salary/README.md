# Beecrowd 1008 - Salary

A clean and verified solution for Beecrowd Problem 1008 using C.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1008 |
| **Problem Name** | Salary |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | C |

---

### Task Summary
The program reads an employee's identification number, total worked hours in a month, and the hourly rate they receive. It calculates the employee's monthly salary using the formula:

$$\text{Salary} = \text{Worked Hours} \times \text{Hourly Rate}$$

**Input Requirements:**
- Three values provided on separate lines:
  1. An integer for the employee number.
  2. An integer for the worked hours.
  3. A floating-point number for the amount received per hour.

**Output Requirements:**
- Print the employee's number: `NUMBER = <employee_number>`.
- Print the calculated monthly salary with two decimal places preceded by `U$ `: `SALARY = U$ <total_salary>`.
- Both lines must terminate with a newline character (`\n`).

---

### Logic & Implementation
1. **Input Acquisition:** Uses `scanf` with `%i` for integer quantities (`employee_number` and `worked_hours`) and `%lf` for monetary rate precision (`hourly_rate`).
2. **Salary Calculation:** Multiplies total hours worked by the hourly rate and stores it in `total_salary`.
3. **Formatted Display:** Formats monetary output using `printf` with `%.2lf` ensuring exact adherence to judge specifications.

---

### Source Code

```c
#include <stdio.h>

int main(void) {
    int employee_number;
    int worked_hours;
    double hourly_rate;

    scanf("%i", &employee_number);
    scanf("%i", &worked_hours);
    scanf("%lf", &hourly_rate);

    double total_salary = worked_hours * hourly_rate;

    printf("NUMBER = %i\n", employee_number);
    printf("SALARY = U$ %.2lf\n", total_salary);

    return 0;
}
```
