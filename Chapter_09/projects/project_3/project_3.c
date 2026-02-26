#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) 
{
    char board[SIZE][SIZE];

    generate_random_walk(board);
    print_array(board);

    return 0;
}

void generate_random_walk(char walk[10][10])
{
    char letter = 'A';
    int directions = 0; // 0-left 1-down 2-up 3-right 
    
    int row = 0; 
    int col = 0; 

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            walk[i][j] = '.';
        }
    }

    walk[row][col] = letter;

    srand((unsigned) time(NULL));

    while (letter < 'Z') {
        
        if ((row == 0        || walk[row - 1][col] != '.') && 
            (row == SIZE - 1 || walk[row + 1][col] != '.') && 
            (col == 0        || walk[row][col - 1] != '.') && 
            (col == SIZE - 1 || walk[row][col + 1] != '.'))   

        {
            break; 
        }

        directions = rand() % 4;
        
        int next_row = row;
        int next_col = col;

        switch (directions) {
            case 0: next_col--; break; // left
            case 1: next_row++; break; // down
            case 2: next_row--; break; // up
            case 3: next_col++; break; // right
        }

        if (next_row >= 0 && next_row < SIZE && 
            next_col >= 0 && next_col < SIZE && 
            walk[next_row][next_col] == '.') {
            
            row = next_row;
            col = next_col;
            letter++;
            walk[row][col] = letter;
        }
    }
}

void print_array(char walk[10][10])
{
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
}