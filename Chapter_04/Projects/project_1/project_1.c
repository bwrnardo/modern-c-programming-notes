#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);
    
    printf("The reversal is: %d", num % 10);
    printf("%d\n", num / 10);

    return 0;
}