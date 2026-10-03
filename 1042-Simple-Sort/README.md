# Beecrowd 1042 - Simple Sort

A clean and verified solution for Beecrowd Problem 1042 using Python 3.

## Overview

| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1042 |
| **Problem Name** | Simple Sort |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

## Task Summary

The task requires reading three distinct or non-distinct integers from the standard input. The program must:
1. Sort the three integers in ascending order.
2. Print the sorted values, one per line.
3. Print a blank line.
4. Print the three original values in the exact sequence they were originally read, one per line.

## Logic & Implementation

1. **Input Parsing:** Read three integers simultaneously from a single line using `map(int, input().split())` while retaining the original values in their original variables.
2. **Boundary Comparisons (Min / Max):**
   - Identify the minimum value (`smallest`) by comparing all three variables using inclusive relational operators (`<=`).
   - Identify the maximum value (`largest`) using matching upper-bound comparisons (`>=`).
3. **Arithmetic Derivation of Median:**
   - Instead of nested conditional branches, the middle value is determined using the mathematical invariant:
   $$\text{middle} = (\text{number\_1} + \text{number\_2} + \text{number\_3}) - \text{smallest} - \text{largest}$$
4. **Structured Output:** Print the sorted triplet (`smallest`, `middle`, `largest`), emit an empty newline via `print()`, and output the input values in original sequence.

## Source Code

```python
# get values from user
number_1, number_2, number_3 = map(int, input().split())

# look for smallest value
smallest = 0

if number_1 <= number_2 and number_1 <= number_3:
    smallest = number_1
elif number_2 <= number_1 and number_2 <= number_3:
    smallest = number_2
else:
    smallest = number_3

# look for largest value
largest = 0

if number_1 >= number_2 and number_1 >= number_3:
    largest = number_1
elif number_2 >= number_1 and number_2 >= number_3:
    largest = number_2
else:
    largest = number_3

# look for middle value
middle = (number_1 + number_2 + number_3) - smallest - largest

# print results
print(smallest)
print(middle)
print(largest)
print()
print(number_1)
print(number_2)
print(number_3)
