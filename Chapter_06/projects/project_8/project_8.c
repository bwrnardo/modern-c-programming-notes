#include <stdio.h>

int main(void)
{
    int days_in_month, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days_in_month);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    for (int i = 0; i <= starting_day; i++)
        printf("   ");

    for (int i = 0; i < days_in_month; i++)
    {
        printf("%3d", i);
        if ((starting_day + i - 1) % 7 == 0)
            printf("\n");
    }
}