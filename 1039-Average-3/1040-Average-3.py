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
