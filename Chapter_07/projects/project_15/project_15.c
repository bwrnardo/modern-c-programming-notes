#include <stdio.h>

int main(void)
{
    long double x, fact = 1;

    printf("Enter a positive integer: ");
    scanf("%Lf", &x);

    for (int i = 1; i <= x; i++) {
        fact *= i ;
    }

    printf("Factorial of %Lf: %Lf", x, fact);

    return 0;
}
/*

short: Calculates the factorial up until 7 
int: Calculates the factorial up until 12
long: Calculates the factorial up until 12 too
long long: Calculates the factorial up until 20 
float: Calculates the factorial up until 34
double: Calculates the factorial up until 170
long double: Calculates the factorial up until 1754 (didnt work on my compiler, had to search it up)

*/
