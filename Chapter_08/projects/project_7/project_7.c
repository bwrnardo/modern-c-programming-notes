#include <stdio.h>

int main(void) 
{
    int arr[5][5] = {0};
    int sum_columns[5] = {0}, sum_rows[5] = {0};


    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf("%d", &arr[i][j]);
            sum_columns[j] += arr[i][j];
            sum_rows[i] += arr[i][j];
        }
    }

    printf("Row total: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", sum_rows[i]);
    }

    printf("\nColumn total: ");
    for (int j = 0; j < 5; j++ ) {
        printf("%d ", sum_columns[j]);
    }

    return 0;
}