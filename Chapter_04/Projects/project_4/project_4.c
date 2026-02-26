#include <stdio.h>

int main(void)
{
    int num, num1, num2, num3, num4, num5;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num);

    num5 = num % 8;
    num /= 8;

    num4 = num % 8;
    num /= 8;

    num3 = num % 8;
    num /= 8;

    num2 = num % 8;
    num /= 8;

    num1 = num % 8;
    num /= 8;
    
    printf("In octal, your number is: %d%d%d%d%d", num1, num2, num3, num4, num5);
}