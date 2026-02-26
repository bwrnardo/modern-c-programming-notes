#include <stdio.h>

int main(void)
{
    int n = 10;
    if (n % 2 == 0) // semicolon here is a mistake  
        printf("n is even\n");
}