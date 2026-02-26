#include <math.h>
#include <stdio.h>

int main(void)
{
    double x, y = 1, xy, avg;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    for (int i = 0; ; i++) {
        xy =  x / y;
        avg = (y + xy) / 2;
        
        if (fabs(y - avg) < 0.00001)
            break;

        y = avg;
    }
    
    printf("Square root: %g\n", fabs(avg));

    return 0;
}