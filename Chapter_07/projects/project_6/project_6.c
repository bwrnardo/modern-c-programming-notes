#include <stdio.h>

int main(void)
{
    printf("Size of int: %zu\n", sizeof(int));
    printf("Size of short int: %zu\n", sizeof(short));
    printf("Size of long int: %zu\n", sizeof(long));
    printf("Size of float: %zu\n", sizeof(float));
    printf("Size of double: %zu\n", sizeof(double));
    printf("Size of long double: %zu\n", sizeof(long double));

    return 0;
}