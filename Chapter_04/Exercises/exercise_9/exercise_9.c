#include <stdio.h>

int main(void)
{
    int i, j, k;

    i = 7, j = 8;
    i *= j + 1;
    printf("%d %d\n", i, j);
    // output: 63 8

    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i, j, k);
    // i += (j += k)
    // output: 3 2 1

    i = 1, j = 2, k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i, j, k);
    // output: 2 -1 3

    i = 2, j = 1, k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i, j, k);
    // output: 0 0 0 
}