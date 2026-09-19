#include <stdio.h>

int main(void) {
    int first_number, second_number;

    scanf("%i", &first_number);
    scanf("%i", &second_number);

    int sum = first_number + second_number;

    printf("SOMA = %i\n", sum);

    return 0;
}
