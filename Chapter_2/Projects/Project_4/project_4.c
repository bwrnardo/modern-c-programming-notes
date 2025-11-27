/*
 * Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
 *
 * Enter an amount: 100.00 
 * With tax added: $105.00
 */

#include <stdio.h>

int main(void)
{
    float amount;
    printf("Enter an amount: ");
    scanf("%f", &amount);

    float tax = amount + (amount * 0.05f);
    printf("With tax added: $%.2f\n", tax);

    return 0;
}
