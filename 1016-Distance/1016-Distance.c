#include <stdio.h>

int main(void) {
    int distance;
    scanf("%i", &distance);

    int time_in_minutes = distance * 2;

    printf("%i minutos\n", time_in_minutes);

    return 0;
}
