#include<stdio.h>

int main(void)
{
    float loan_amount, intrest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan_amount);

    printf("Enter intrest rate: ");
    scanf("%f", &intrest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    loan_amount = loan_amount + (loan_amount * intrest_rate / 12.0 / 100.0);  /* Intrest amount added before deducting payment*/
    loan_amount = loan_amount - monthly_payment;
    
    printf("Balance remaining after first payment: %.2f", loan_amount);

    return 0;
}