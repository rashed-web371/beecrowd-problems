#include <stdio.h>

int main(void) {
    int total_distance;
    double spent_fuel;

    scanf("%i", &total_distance);
    scanf("%lf", &spent_fuel);

    double consumption = total_distance / spent_fuel;

    printf("%.3lf km/l\n", consumption);

    return 0;
}
