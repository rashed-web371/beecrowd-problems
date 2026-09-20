#include <stdio.h>

int main(void) {
    char name[30];
    scanf("%s", name);

    double fixed_salary;
    scanf("%lf", &fixed_salary);

    double total_sales;
    scanf("%lf", &total_sales);

    double commission = total_sales * 0.15;
    double total_salary = fixed_salary + commission;

    printf("TOTAL = R$ %.2lf\n", total_salary);

    return 0;
}
