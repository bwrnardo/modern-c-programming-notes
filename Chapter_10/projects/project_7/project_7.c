#include <stdio.h>

#define MAX_DIGITS 10

char digits[4][4 * MAX_DIGITS];
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                            {0, 1, 1, 0, 0, 0, 0},
                            {1, 1, 0, 1, 1, 0, 1},
                            {1, 1, 1, 1, 0, 0, 1},
                            {0, 1, 1, 0, 0, 1, 1},
                            {1, 0, 1, 1, 0, 1, 1},
                            {1, 0, 1, 1, 1, 1, 1},
                            {1, 1, 1, 0, 0, 0, 0},
                            {1, 1, 1, 1, 1, 1, 1},
                            {1, 1, 1, 1, 0, 1, 1}};


void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void) 
{
    char ch;
    int position = 0;
    
    clear_digits_array();

    printf("Enter a number: ");
    while ((ch = getchar()) != '\n') {
        if (ch >= '0' && ch <= '9' && position < MAX_DIGITS) 
                process_digit(ch - '0', position++);
    }

    print_digits_array();

    return 0;
}

/* store blank characters into all elements of the digits array */
void clear_digits_array(void)
{
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

/* store the seven-segment representation of digit into a specified position in the digits array */
    void process_digit(int digit, int position)
    {
        int offset = position * 4;

        for (int i = 0; i < 7; i++) {
            if (segments[digit][i] == 1) {
                switch(i) {
                    case 0: digits[0][offset + 1] = '_'; break;   
                    case 1: digits[1][offset + 2] = '|'; break;   
                    case 2: digits[2][offset + 2] = '|'; break;   
                    case 3: digits[2][offset + 1] = '_'; break;   
                    case 4: digits[2][offset + 0] = '|'; break;   
                    case 5: digits[1][offset + 0] = '|'; break;   
                    case 6: digits[1][offset + 1] = '_'; break;   
                }
            }
        }
    }

/* display the rows of the digits array */
void print_digits_array(void)
{
    int i, j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < MAX_DIGITS * 4; j++)
            putchar(digits[i][j]);
        printf("\n");
    }
}