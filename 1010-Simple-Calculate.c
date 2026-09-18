#include <stdio.h>
int main(void){

int product_code_1, product_code_2, units_number_1, units_number_2;
float product_price_1, product_price_2, final_price;

        scanf("%i",&product_code_1);

        scanf("%i",&units_number_1);

        scanf("%f", &product_price_1);

        scanf("%i", &product_code_2);

        scanf("%i", &units_number_2);

        scanf("%f", &product_price_2);
  
        final_price = ( units_number_1 * product_price_1 ) + (units_number_2 * product_price_2);
        printf("VALOR A PAGAR: R$ %.2f\n", final_price);
return 0;
}
