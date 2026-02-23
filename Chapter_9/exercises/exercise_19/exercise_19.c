#include <stdio.h>

void pb(int n) 
{
    if (n != 0) {
        pb (n / 2);
        putchar('0' + n % 2);
    }
}

int main(void)
{
    pb(10);

    return 0;
}

/*

the function returns the binary conversion of the decimal entered

*/