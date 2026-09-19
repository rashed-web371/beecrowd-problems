#include <stdio.h>
int main(void){
    int age, years, months, days;
    //printf("Age in Days:");
    scanf("%i", &age);
    for( years = 0; age >= 365 ;years++){
        age = age - 365;
    }
    for(months = 0;age >= 30;months++){
        age = age - 30;
    }
    for(days = 0;age >= 1 ;days++){
        age = age - 1;
    }
    printf("%i ano(s)\n", years);
    printf("%i mes(es)\n", months);
    printf("%i dia(s)\n", days);
    return 0;
}
