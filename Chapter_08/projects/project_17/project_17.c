#include <stdio.h>

int main(void) 
{
    int n;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be and odd number between 1 and 99.\n");
    printf("Enter a size of magic square: ");
    
    while (1) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            printf("Please enter an odd number: ");
        }
        else 
            break;
    }
    
    int magic_square[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            magic_square[i][j] = 0;
        }
    }

    int row = 0, col = n / 2;
    magic_square[row][col] = 1;

    for (int i = 2; i <= (n * n); i++) {

        int pr = row, pc = col;

        if (row - 1 < 0)
            row = n - 1;
        else
            row -= 1;

        if (col + 1 > (n - 1))
            col = 0;
        else 
            col += 1;

        if (magic_square[row][col] > 0) {
            pr += 1;
            if (pr > (n - 1))
                pr = 0;
            magic_square[pr][pc] = i;
            row = pr;
            col = pc;
        }
        else
            magic_square[row][col] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf(" %3d ", magic_square[i][j]);
        }
        printf("\n");
    }
    return 0;
}