#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
    int temperature_readings[DAYS][HOURS] = {0};

    float total = 0.0f;

    for (int i = 0; i < DAYS; i++) {
        for (int j = 0; j < HOURS; i++) {
            total += temperature_readings[i][j];
        }
    }

    printf("Average temperature for a month: %g\n", (total / (DAYS * HOURS)));

    return 0;
}