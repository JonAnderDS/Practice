
#include <stdio.h>
#define TAX_5 0.05f

int main (void)
{
    float amount, afterAmount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    
    afterAmount = amount + (amount * TAX_5);
    printf("With tax added: %.2f\n", afterAmount);

    return 0;
}