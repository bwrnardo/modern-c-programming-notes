#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int n, x;

    printf("Enter a value for x: ");
    scanf("%d", &x);
    printf("Enter a value for n: ");
    scanf("%d", &n);

    printf("The power of %d to the %d is: %d", x, n, power(x, n));

    return 0;
}

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else {
        if (n % 2 == 0) {
            long temp = power(x, n / 2); 
            return temp * temp;
        }
        else 
            return x * power(x,n - 1);
    }
}