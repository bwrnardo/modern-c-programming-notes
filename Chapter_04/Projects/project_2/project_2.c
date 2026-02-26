#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    
    printf("The reversal is: %d", num % 10);
    printf("%d", (num / 10) % 10);
    printf("%d\n", num / 100);

    return 0;
}