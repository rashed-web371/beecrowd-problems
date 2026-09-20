#include <stdio.h>
int main(void){
float A, B ,C;
    scanf("%f %f %f", &A, &B, &C);
float rectangled_triangle = (A * C) / 2;
double circle = 3.14159 * (C * C);
float trapezium = ((A + B) * C) / 2;
float square = B * B;
float rectangle = A * B;

printf("TRIANGULO: %.3f\n", rectangled_triangle);
printf("CIRCULO: %.3f\n", circle);
printf("TRAPEZIO: %.3f\n", trapezium);
printf("QUADRADO: %.3f\n", square);
printf("RETANGULO: %.3f\n", rectangle);
return 0;
}
