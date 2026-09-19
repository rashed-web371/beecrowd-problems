#include <stdio.h>

int main(void) {
    int first_factor, second_factor;

    scanf("%i", &first_factor);
    scanf("%i", &second_factor);

    int product = first_factor * second_factor;

    printf("PROD = %i\n", product);

    return 0;
}
