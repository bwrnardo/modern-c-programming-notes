#include <stdio.h>

int main(void)
{
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The reversal is: ");
    do {
        n = num % 10;
        num /= 10;
        printf("%d", n);
    } while (num != 0);

    printf("\n");
    return 0;
}