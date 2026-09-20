
#include <stdio.h>

int main(void) {
    int spent_time, average_speed;

    scanf("%i %i", &spent_time, &average_speed);

    int total_distance = spent_time * average_speed;
    
    // The car achieves 12.0 km/l fuel efficiency
    double spent_fuel = total_distance / 12.0;

    printf("%.3lf\n", spent_fuel);

    return 0;
}
