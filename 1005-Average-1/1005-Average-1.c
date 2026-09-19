#include <stdio.h>

int main(void) {
    double grade_a;
    scanf("%lf", &grade_a);
    double weighted_grade_a = grade_a * 3.5;

    double grade_b;
    scanf("%lf", &grade_b);
    double weighted_grade_b = grade_b * 7.5;

    double average = (weighted_grade_a + weighted_grade_b) / 11.0;

    printf("MEDIA = %.5lf\n", average);
    return 0;
}
