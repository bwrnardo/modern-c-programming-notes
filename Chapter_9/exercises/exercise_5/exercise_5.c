#include <stdio.h>

unsigned int num_digits(int n);

int main(void)
{
    printf("%d\n", num_digits(4000));
    return 0;
}

unsigned int num_digits(int n)
{
    unsigned int digits = 0;
    while (n > 0) {
        n /= 10;
        digits++;
    }
    return digits;
}