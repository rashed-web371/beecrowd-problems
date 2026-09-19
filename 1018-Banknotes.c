#include <stdio.h>

int main(void){
    int money, original;
    int notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;

    //printf("money: ");
    scanf("%i", &money);

    original = money;

    for (notes_100 = 0; money >= 100; notes_100++){
        money = money - 100;
    }

    for (notes_50 = 0; money >= 50; notes_50++){
        money = money - 50;
    }

    for (notes_20 = 0; money >= 20; notes_20++){
        money = money - 20;
    }

    for (notes_10 = 0; money >= 10; notes_10++){
        money = money - 10;
    }

    for (notes_5 = 0; money >= 5; notes_5++){
        money = money - 5;
    }

    for (notes_2 = 0; money >= 2; notes_2++){
        money = money - 2;
    }

    for (notes_1 = 0; money >= 1; notes_1++){
        money = money - 1;
    }

    printf("%d\n", original);
    printf("%d nota(s) de R$ 100,00\n", notes_100);
    printf("%d nota(s) de R$ 50,00\n", notes_50);
    printf("%d nota(s) de R$ 20,00\n", notes_20);
    printf("%d nota(s) de R$ 10,00\n", notes_10);
    printf("%d nota(s) de R$ 5,00\n", notes_5);
    printf("%d nota(s) de R$ 2,00\n", notes_2);
    printf("%d nota(s) de R$ 1,00\n", notes_1);

    return 0;
}

```
