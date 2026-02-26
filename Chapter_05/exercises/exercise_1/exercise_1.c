#include <stdio.h>

int main(void)
{
    int i, j, k;
    
    i = 2, j = 3;
    k = i * j == 6;
    printf("%d\n", k);
    // output: 1

    i = 5, j = 10, k = 1;
    printf("%d\n", k > i < j);
    // output: 1

    i = 3, j = 2, k = 1;
    printf("%d\n", i < j == j < k);
    // output: 1

    i = 3, j = 4, k = 5;
    printf("%d\n", i % j + j < k);
    // output: 0

    return 0;
}