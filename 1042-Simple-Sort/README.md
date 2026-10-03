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

The program reads three integer numbers from standard input and sorts them in ascending order.

Output Requirements:
* Print the sorted values in ascending order, one per line.
* Print a blank line.
* Print the values in the sequence as they were read, one per line.

## Logic & Implementation

1. **Input Parsing:** Reads three integers simultaneously on a single line using `map(int, input().split())` while preserving the original input sequence across distinct variables.
2. **Extremum Identification:**
   * Uses inclusive relational operators (`<=`) to identify the minimum value (`smallest`).
   * Uses inclusive relational operators (`>=`) to identify the maximum value (`largest`), safely handling duplicate edge cases.
3. **Median Derivation:** Uses an arithmetic invariant to resolve the middle element without nested logic:
```text
middle = (number_1 + number_2 + number_3) - smallest - largest
```

4. **Structured Output:**
   * Prints the sorted sequence in ascending order (`smallest`, `middle`, `largest`), each on a separate line.
   * Prints a blank line separator using an empty `print()`.
   * Prints the original values in their initial input order (`number_1`, `number_2`, `number_3`).


## Source Code
```python
# get vlues from user
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
