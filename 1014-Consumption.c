#include <stdio.h>
int main(void){
    int total_distance;
    float spent_fuel, consumption;
    scanf("%i",&total_distance);
    scanf("%f",&spent_fuel);
    consumption = total_distance / spent_fuel;
    printf("%.3f km/l\n", consumption);
    return 0;
}
