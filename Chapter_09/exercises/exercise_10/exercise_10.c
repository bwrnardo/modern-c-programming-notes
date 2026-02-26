#include <stdio.h>

int largest(int n, int a[n]);
float average(int n, int a[n]);
int positive(int n, int a[n]);

int main(void)
{
    int a[10] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10};

    printf("Largest element: %d\n", largest(10, a));
    printf("Average of elements: %g\n", average(10, a));
    printf("Positive elements: %d\n", positive(10, a));


    return 0;
}

int largest(int n, int a[n]) 
{
    int largest = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }
    return largest;
}

float average(int n, int a[n]) 
{
    float avg = 0;
    for (int i = 0; i < n; i++) {
        avg += a[i];
    }
    return avg / n;
}

int positive(int n, int a[n]) 
{
    int positives = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) 
            positives++;
    }
    return positives;
}
