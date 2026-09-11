#include <stdio.h>

int main(void){
float A;
    //printf("the first grade:");
        scanf("%f", &A);
float a = A * 3.5;


float B;
    //printf("the second grade:");
        scanf("%f", &B);
float b = B * 7.5;

float average = (a + b) / 11;

printf("MEDIA = %.5f\n", average);
return 0;
}
