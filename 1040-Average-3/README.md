# Beecrowd 1040 - Average 3

A clean and verified solution for Beecrowd Problem 1040 using Python 3.

---

### Overview
| Attribute | Details |
| :--- | :--- |
| **Problem ID** | 1040 |
| **Problem Name** | Average 3 |
| **Platform** | Beecrowd (URI Online Judge) |
| **Category** | Beginner |
| **Language** | Python 3 |

---

### Task Summary
The program reads four floating-point numbers representing student test scores ($N_1, N_2, N_3, N_4$) with weights of 2, 3, 4, and 1 respectively.

The weighted average is calculated as:
$$\text{Average} = \frac{(N_1 \times 2) + (N_2 \times 3) + (N_3 \times 4) + (N_4 \times 1)}{10}$$

**Evaluation Rules:**
- **Average $\ge 7.0$:** Print `Aluno aprovado.` (Student approved).
- **Average $< 5.0$:** Print `Aluno reprovado.` (Student failed).
- **$5.0 \le \text{Average} \le 6.9$:** Print `Aluno em exame.` (Student in exam).
  - An additional score (`exam_score`) must then be read.
  - Print `Nota do exame: <score>`.
  - Recalculate: $\text{Final Average} = \frac{\text{Average} + \text{exam\_score}}{2}$.
  - If $\text{Final Average} \ge 5.0$, print `Aluno aprovado.`; otherwise, print `Aluno reprovado.`.
  - Print the final result: `Media final: <final_average>`.

All averages and scores must be displayed with exactly 1 decimal place.

---

### Logic & Implementation
1. **Weighted Average:** Computes the initial grade using weight factors summing up to 10.
2. **Early Exit Branches:** Uses `sys.exit()` immediately if the student's status is permanently determined (approved or reproved) to avoid superfluous input prompts.
3. **Supplementary Evaluation:** If the student requires an exam, parses the additional score, calculates the unweighted mean between the initial average and the exam score, and determines the final academic verdict.
4. **Precision Formatting:** All output messages format floating-point values to one decimal digit (`:.1f`).

---

### Source Code

```python
import sys

# asking the user for input
score1, score2, score3, score4 = map(float, input().split())

# calculating the weighted average
average = ((score1 * 2) + (score2 * 3) + (score3 * 4) + score4) / 10

# check whether the student failed, succeeded, or needs an additional test
print(f'Media: {average:.1f}')
if average >= 7.0:
    print('Aluno aprovado.')
    sys.exit()
elif average < 5.0:
    print('Aluno reprovado.')
    sys.exit()
else:
    print('Aluno em exame.')

# asking for an additional exam score
exam_score = float(input())
print(f'Nota do exame: {exam_score:.1f}')

# recalculating the final average
final_average = (average + exam_score) / 2
if final_average >= 5.0:
    print('Aluno aprovado.')
else:
    print('Aluno reprovado.')

# print finals
print(f'Media final: {final_average:.1f}')
```
