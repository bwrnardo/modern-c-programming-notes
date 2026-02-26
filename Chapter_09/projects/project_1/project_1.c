#include <stdio.h>

void selection_sort(int a[], int n);

int main(void)
{
    int n;

    printf("How many elements to sort? ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    selection_sort(arr, n);
    
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;        
}

void selection_sort(int a[], int n)
{
    if (n <= 1)
        return;

    int max = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[max])
            max = i; 
    }
    int temp = a[n - 1];
    a[n - 1] = a[max];
    a[max] = temp;


    selection_sort(a, n - 1);
} 