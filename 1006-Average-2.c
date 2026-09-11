#include <stdio.h>
 
int main(void){
float A;
    //printf("A:");
        scanf("%f", &A);
        A = A * 2;
float B;
    //printf("B:");
        scanf("%f", &B);
        B = B * 3;

float C;
    //printf("C:");
        scanf("%f", &C);
        C = C * 5;
float aver = (A + B + C) / 10;

printf("MEDIA = %.1f\n", aver);




    return 0;
}
