#include <stdio.h>
int main(void){
    int total_distance, time, speed;
    float fuel;
  
    scanf("%i %i", &time, &speed);
  
    total_distance = time * speed;
    // 12.0 km/l is the car's fuel efficiency as stated in the problem
    fuel = total_distance / 12.0;
  
    printf("%.3f\n", fuel);
  
    return 0;
}
