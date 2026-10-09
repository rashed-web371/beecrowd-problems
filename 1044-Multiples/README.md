# Beecrowd 1044 - Multiples

A clean and verified solution for Beecrowd Problem 1044 using Python 3.

## Overview

| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1044 |
| **Problem Name** | Multiples |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

## Task Summary

The program reads two integer values ($A$ and $B$) from standard input and determines whether the numbers are multiples of each other.

Evaluation & Output Rules:
* Print `Sao Multiplos` if either number divides evenly into the other without a remainder.
* Print `Nao sao Multiplos` if neither number is a multiple of the other.

## Logic & Implementation

1. **Input Parsing:** Reads two integer numbers on a single line using `map(int, input().split())` into distinct variables.
2. **Relative Magnitude Determination:** Evaluates the input values to identify the upper and lower bounds (`largest` and `smallest`), safely accounting for arbitrary input ordering.
3. **Divisibility Verification:** Tests the remainder of the integer division using the modulo operator (`%`):

```text
largest % smallest == 0
```

4. **Structured Output:**
   * Prints `Sao Multiplos` if the remainder equals zero.
   * Prints `Nao sao Multiplos` otherwise.

## Source Code

```python
# get 2 numbers from user
number_1, number_2 = map(int, input().split())

# find largest and smallest numbers
largest = 0
smallest = 0
if number_1 > number_2:
    largest = number_1
    smallest = number_2
else:
    largest = number_2
    smallest = number_1

# check if two numbers are multiples and print the result
if largest % smallest == 0:
    print('Sao Multiplos')
else:
    print('Nao sao Multiplos')
```
