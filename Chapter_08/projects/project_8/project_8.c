#include <stdio.h>

#define QUIZ 5
#define STUDENT 5

int main(void) 
{
    int arr[STUDENT][QUIZ] = {0}, high, low;
    int totalscore_student[STUDENT] = {0};
    int totalscore_quiz[QUIZ] = {0}; 
    double averageof_student[STUDENT] = {0}, averageof_quiz[QUIZ] = {0};

    for (int i = 0; i < STUDENT; i++) {

        printf("Enter quiz grade %d for the 5 students: ", i + 1);

        for (int j = 0; j < QUIZ; j++) {

            scanf("%d", &arr[i][j]);

            totalscore_student[i] += arr[i][j];
            averageof_student[i] = (float) totalscore_student[i] / 5;

            totalscore_quiz[j] += arr[i][j];
            averageof_quiz[j] = (float) totalscore_quiz[j] / 5;
        }
    }   

    printf("Student  Total  Average\n");
    for (int i = 0; i < STUDENT; i++) {
        printf("%-2d %7d %9.1f\n", i+1, totalscore_student[i], averageof_student[i]);
    }
    
    printf("\nQuiz  Average  High  Low\n");
    for (int i = 0; i < QUIZ; i++ ) {
        high = 0;
        low = 100;
        for (int j = 0; j < QUIZ; j++) {
            if (arr[i][j] > high) 
                high = arr[i][j];
            if (arr[i][j] < low) 
                low = arr[i][j];
        }
        printf("%-3d  %4.1f  %5d  %4d\n", i+1, averageof_quiz[i], high, low);
    }

    return 0;
}