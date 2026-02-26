/* 
 * Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
 *
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * 
 * Hint: C doesn’t have an exponentiation operator, so you’ll need to multiply .v by itself repeatedly in order to compute the powers of x.
 * (For example, x * x * x is x cubed.)
 */

#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    int x_squared = x * x;
    int x_cubed = x * x * x;
    int x_fourth = x * x * x * x;
    int x_fifth = x * x * x * x * x;

    int polynomial = ((3 * x_fifth) + (2 * x_fourth) - (5 * x_cubed) - (x_squared) + (7 * x) - (6));
    printf("The result of the polynomial is: %d\n", polynomial);

    return 0;
}