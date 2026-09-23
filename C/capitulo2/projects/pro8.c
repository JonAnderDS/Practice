
#include <stdio.h>

int main (void)
{
    float loan_amount, interest_rate, monthly_pay, balance_first, balance_second, balance_third;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_pay);

    float interest_monthly = interest_rate / 100.0f / 12.0f;

    balance_first = loan_amount * (1+interest_monthly) - monthly_pay;
    balance_second = balance_first * (1+interest_monthly) - monthly_pay;
    balance_third = balance_second * (1+interest_monthly) - monthly_pay;

    printf("Balance remaining after first payment: %.2f\n", balance_first);
    printf("Balance remaining after first payment: %.2f\n", balance_second);
    printf("Balance remaining after first payment: %.2f\n", balance_third);


    return 0;
}