#include <stdio.h>
 
int main(void){
 char name[30];
    //printf("Username:");
        scanf("%s", name);
 double salary;
    //printf("Fixed Salary:");
        scanf("%lf", &salary);
 double bonus;
    //printf("Bonuses:");
        scanf("%lf", &bonus);
        double total_bonus = bonus * 0.15;
        double total_salary = salary + total_bonus;
printf("TOTAL = R$ %.2lf\n", total_salary);
return 0;

}
