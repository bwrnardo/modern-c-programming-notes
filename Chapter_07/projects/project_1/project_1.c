#include <stdio.h>

int main(void)
{
    long i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%ld", &n);
    
    for (i = 1; i <= n; i++)
        printf("%ld %ld\n", i, i * i);

    return 0;
}
/*

short stops at 182 which is 16 bit
long stops at 46341 which is 32 bit

*/