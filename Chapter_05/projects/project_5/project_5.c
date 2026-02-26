#include <stdio.h>

int main(void)
{
    float taxable_income, tax;

    printf("Enter the amount of income: ");
    scanf("%f", &taxable_income);

    if (taxable_income < 750.0f)
        tax = taxable_income * 0.01f;
    else if (taxable_income <= 2250.0f)
        tax = 7.50f + ((taxable_income - 750.0f) * 0.02f);
    else if (taxable_income <= 3750.0f)
        tax = 37.50f + ((taxable_income - 2250.0f) * 0.03f);
    else if (taxable_income <= 5250.0f)
        tax = 82.50f + ((taxable_income - 3750.0f) * 0.04f);
    else if (taxable_income <= 7000.0f)
        tax = 142.50f + ((taxable_income - 5250.0f) * 0.05);
    else
        tax = 230.0f + ((taxable_income - 7000.0f) * 0.06);

    printf("Your tax due is: $%.2f", tax);

    return 0;
}