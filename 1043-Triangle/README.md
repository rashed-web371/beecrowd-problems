# Beecrowd 1043 - Triangle

A clean and verified solution for Beecrowd Problem 1043 using Python 3.

## Overview

| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1043 |
| **Problem Name** | Triangle |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

## Task Summary

The program reads three floating-point values ($A$, $B$, and $C$) representing potential lengths of geometric sides.

Evaluation & Output Rules:
* If the three values satisfy the conditions to form a triangle:
  * Calculate the perimeter of the triangle: $A + B + C$.
  * Print the formatted message: `Perimetro = XX.X`.
* If a valid triangle cannot be formed:
  * Calculate the area of a trapezium having $A$ and $B$ as parallel bases and $C$ as its height: $\frac{(A + B) \times C}{2}$.
  * Print the formatted message: `Area = XX.X`.

## Logic & Implementation

1. **Input Parsing:** Read three floating-point numbers on a single line using `map(float, input().split())` into distinct variables.
2. **Triangle Inequality Verification:**
   * A triangle is mathematically valid if and only if the sum of any two sides is strictly greater than the third side:
     * $A + B > C$
     * $A + C > B$
     * $B + C > A$
   * Combine all three relational checks using the logical `and` operator.
3. **Branching Computation:**
   * **True Branch (Triangle):** Sum the three sides to determine the perimeter.
   * **False Branch (Trapezium):** Compute the trapezoid area using the formula $\frac{1}{2} \times (A + B) \times C$.
4. **Structured Output:** Print the calculated geometric metric inside the designated label (`Perimetro` or `Area`).

## Source Code

```python
# get 3 values from user
value_1, value_2, value_3 = map(float, input().split())

# test triangle inequality theorem
if (value_1 + value_2) > value_3 and (value_1 + value_3) > value_2 and (value_2 + value_3) > value_1:

    perimeter = value_1 + value_2 + value_3

    print(f'Perimetro = {perimeter}')
# calculate the area of the trapezium
else:
    trapezium_area = 0.5 * (value_1 + value_2) * value_3
    print(f'Area = {trapezium_area}')
