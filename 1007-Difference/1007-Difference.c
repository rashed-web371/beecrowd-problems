#include <stdio.h>

int main(void) {
    int a, b, c, d;

    scanf("%i %i %i %i", &a, &b, &c, &d);

    int difference = (a * b) - (c * d);

    printf("DIFERENCA = %i\n", difference);

    return 0;
}
