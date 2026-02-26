#include <stdio.h>

int compute_polynomial(int x);

int main(void)
{
    int x;
    printf("Enter a value for x: ");
    scanf("%d", &x);

    int result = compute_polynomial(x);
    printf("The result of the polynomial is: %d\n", result);

    return 0;
}

int compute_polynomial(int x)
{
    return ((((3*x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
}