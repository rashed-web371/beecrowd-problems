#include <stdio.h>
#include <stdlib.h>
int main(void){
    int value_1, value_2, value_3;
    scanf("%i %i %i", &value_1, &value_2, &value_3);
  
    int max_ab = (value_1 + value_2 + abs(value_1 - value_2)) / 2;
    int max_all = (max_ab + value_3 + abs(value_3 - max_ab)) / 2;

    printf("%i eh o maior\n", max_all);
    return 0;
}
