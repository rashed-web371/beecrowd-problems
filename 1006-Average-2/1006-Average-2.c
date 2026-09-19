#include <stdio.h>

int main(void) {
    double grade_a, grade_b, grade_c;

    scanf("%lf", &grade_a);
    grade_a = grade_a * 2.0;

    scanf("%lf", &grade_b);
    grade_b = grade_b * 3.0;

    scanf("%lf", &grade_c);
    grade_c = grade_c * 5.0;

    double average = (grade_a + grade_b + grade_c) / 10.0;

    printf("MEDIA = %.1lf\n", average);

    return 0;
}
