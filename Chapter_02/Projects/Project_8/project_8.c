#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    float monthly_rate = (interest_rate / 100.0f) / 12;

    float month1 = (loan - monthly_payment) + (monthly_rate * loan);
    float month2 = (month1 - monthly_payment) + (monthly_rate * month1);
    float month3 = (month2 - monthly_payment) + (monthly_rate * month2);

    printf("Balance remaining after first payment: %.2f\n", month1);
    printf("Balance remaining after second payment: %.2f\n", month2);
    printf("Balance remaining after third payment: %.2f\n", month3);

    return 0;
}