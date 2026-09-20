#include <stdio.h>
int main(void){
int radius;
    //printf("radius:");
    scanf("%i", &radius);
double pi = 3.14159;
double volume = (4 / 3.0) * pi * radius * radius * radius;
printf("VOLUME = %.3lf\n", volume);
return 0;

}
