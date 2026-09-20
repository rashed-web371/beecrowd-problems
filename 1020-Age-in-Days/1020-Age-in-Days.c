
#include <stdio.h>

int main(void) {
    int age_in_days, years, months, days;

    scanf("%i", &age_in_days);

    for (years = 0; age_in_days >= 365; years++) {
        age_in_days -= 365;
    }

    for (months = 0; age_in_days >= 30; months++) {
        age_in_days -= 30;
    }

    for (days = 0; age_in_days >= 1; days++) {
        age_in_days -= 1;
    }

    printf("%i ano(s)\n", years);
    printf("%i mes(es)\n", months);
    printf("%i dia(s)\n", days);

    return 0;
}
