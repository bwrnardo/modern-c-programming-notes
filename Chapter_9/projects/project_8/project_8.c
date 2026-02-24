#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    srand(time(NULL));
    int wins = 0, losses = 0;

    while (1) {
        bool game = play_game();

        if (game)
            wins++;
        else
            losses++;
        
        printf("\nPlay again? ");
        char ch;
        scanf(" %c", &ch);

        if (ch == 'y' || ch == 'Y')
            continue;
        else   
            break;
    }

    printf("\nWins: %d   Losses: %d\n", wins, losses);
    return 0;
}

int roll_dice(void)
{

    int roll1 = (rand() % 6) + 1;
    int roll2 = (rand() % 6) + 1;

    return roll1 + roll2;
}   

bool play_game(void)
{
    int roll = roll_dice();
    int set_point;

    printf("You rolled: %d\n", roll);

    switch (roll) {
        case 7: case 11:
            printf("You win!\n");
            return true;
        case 2: case 3: case 12:
            printf("You lose!\n");
            return false;
        default:
            set_point = roll;
            printf("Your point is: %d\n", set_point);
            break;
    }

    do {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);
        if (roll == set_point) {
            printf("You win!\n");
            return true;
        }
    } while (roll != 7);
    printf("You lose!\n");
    return false;
}