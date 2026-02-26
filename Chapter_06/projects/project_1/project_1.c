#include <stdio.h>

int main(void)
{
    float number, max;

    do {        
        printf("Enter a number: ");
        scanf("%f", &number);
        
        if (number > max)
            max = number;

    } while (number > 0);
    
    printf("The largest number entered was %g\n", max);

    return 0;
}