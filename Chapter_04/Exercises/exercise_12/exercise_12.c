#include <stdio.h>

int main(void)
{
    int i, j;

    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i, j);
    // output: 6 16

    i = 5;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    // output: 4 17

    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i, j);
    // output: 6 23

    i = 7;
    j = 3 + --i * 2;
    printf("%d %d", i, j);
    // output: 6 15
}