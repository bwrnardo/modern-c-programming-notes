#include <stdio.h>

int main(void)
{
    int n, m, num, den;

    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &m);
    
    num = n;
    den = m;

    while (n != 0)
    {
        int temp = m % n;
        m = n;
        n = temp;
    }
    
    printf("In lowest terms: %d/%d\n", num / m, den / m);

    return 0;
}