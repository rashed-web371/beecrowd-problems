#include <stdio.h>
int main(void){
int employee_number;
    //printf("Employee Number:");
        scanf("%i", &employee_number);
int worked_hours;
    //printf("Worked hours a Month:");
        scanf("%i", &worked_hours);
float per_hour;
    //printf("The Amount You Receive Per Hour:");
        scanf("%f", &per_hour);
float total_salary = worked_hours * per_hour;
printf("NUMBER = %i\n", employee_number);

printf("SALARY = U$ %.2f\n", total_salary);
return 0;
}
