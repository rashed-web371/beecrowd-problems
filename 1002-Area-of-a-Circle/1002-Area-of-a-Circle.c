#include <stdio.h>

int main(void) {
    const double pi = 3.14159;
    double radius;

    scanf("%lf", &radius);

    double area = pi * radius * radius;

    printf("A=%.4lf\n", area);

    return 0;
}
