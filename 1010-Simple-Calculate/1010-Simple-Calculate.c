
#include <stdio.h>

int main(void) {
    int product_code_1, units_1;
    double product_price_1;

    int product_code_2, units_2;
    double product_price_2;

    scanf("%i %i %lf", &product_code_1, &units_1, &product_price_1);
    scanf("%i %i %lf", &product_code_2, &units_2, &product_price_2);

    double total_to_pay = (units_1 * product_price_1) + (units_2 * product_price_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", total_to_pay);

    return 0;
}
