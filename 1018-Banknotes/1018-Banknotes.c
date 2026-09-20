#include <stdio.h>

int main(void) {
    int remaining_amount, initial_value;
    int notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    scanf("%i", &remaining_amount);

    initial_value = remaining_amount;

    for (notes_100 = 0; remaining_amount >= 100; notes_100++) {
        remaining_amount -= 100;
    }

    for (notes_50 = 0; remaining_amount >= 50; notes_50++) {
        remaining_amount -= 50;
    }

    for (notes_20 = 0; remaining_amount >= 20; notes_20++) {
        remaining_amount -= 20;
    }

    for (notes_10 = 0; remaining_amount >= 10; notes_10++) {
        remaining_amount -= 10;
    }

    for (notes_5 = 0; remaining_amount >= 5; notes_5++) {
        remaining_amount -= 5;
    }

    for (notes_2 = 0; remaining_amount >= 2; notes_2++) {
        remaining_amount -= 2;
    }

    for (notes_1 = 0; remaining_amount >= 1; notes_1++) {
        remaining_amount -= 1;
    }

    printf("%d\n", initial_value);
    printf("%d nota(s) de R$ 100,00\n", notes_100);
    printf("%d nota(s) de R$ 50,00\n", notes_50);
    printf("%d nota(s) de R$ 20,00\n", notes_20);
    printf("%d nota(s) de R$ 10,00\n", notes_10);
    printf("%d nota(s) de R$ 5,00\n", notes_5);
    printf("%d nota(s) de R$ 2,00\n", notes_2);
    printf("%d nota(s) de R$ 1,00\n", notes_1);

    return 0;
}
