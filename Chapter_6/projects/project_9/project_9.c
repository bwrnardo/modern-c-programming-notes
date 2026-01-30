#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, payments, month;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);
    printf("Enter amount of payments: ");
    scanf("%f", &payments);

    float monthly_rate = (interest_rate / 100.0f) / 12;

    for (int i = 1; i <= payments; i++)
    {
        month = (loan - monthly_payment) + (monthly_rate * loan);
        loan = month;

        printf("Balance remaining after month %d: %.2f\n", i, month);
    }
    
    return 0;
}