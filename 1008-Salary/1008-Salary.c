#include <stdio.h>

int main(void) {
    int employee_number, int worked_hours;
    double hourly_rate;

    scanf("%i %i", &employee_number, &worked_hours);
    scanf("%lf", &hourly_rate);

    double total_salary = worked_hours * hourly_rate;

    printf("NUMBER = %i\n", employee_number);
    printf("SALARY = U$ %.2lf\n", total_salary);

    return 0;
}
