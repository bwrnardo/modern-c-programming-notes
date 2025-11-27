/* 
 * Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 */

#include <stdio.h>

int main(void)
{
    int twenties, tens, fives, ones;
    int dollars;

    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);

    twenties = dollars / 20;
    dollars -= twenties * 20;

    tens = dollars / 10;
    dollars -= tens * 10;

    fives = dollars / 10;
    dollars -= fives * 10;

    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf(" $5 bills: %d\n", fives);
    printf(" $1 bills: %d\n", dollars);

    return 0;
}