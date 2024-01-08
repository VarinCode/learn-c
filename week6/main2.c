#include <stdio.h>
#define ROWS 5
#define COLS 3

void sumOfScore(int n[ROWS], float score[ROWS][COLS]);
void findMaxScore(int n[ROWS], float score[ROWS][COLS]);
void showTable(int n[ROWS], float score[ROWS][COLS]);

int main(){
    float ComputerProgramming[ROWS][COLS];
    float score;
    int studentNumber[ROWS] = { 1, 2, 3, 4, 5 };

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j< COLS; j++){
            printf("Enter student %d score for the 1st time %d : ", i + 1 , j + 1);
            scanf("%f" , &score);
            ComputerProgramming[i][j] = score;
        }
        putchar('\n');
    }

    showTable(studentNumber, ComputerProgramming);

    printf("\n-------- Conclusion --------\n");
    sumOfScore(studentNumber, ComputerProgramming);    
    findMaxScore(studentNumber, ComputerProgramming);
}

void showTable(int n[ROWS], float score[ROWS][COLS]){\
    float sum = 0;
    printf("\n--------- Table ---------\n");
    printf("time/student\t\t 1 time\t\t 2 time\t\t 3 time\t\t sum\n");

    for(int i = 0; i < ROWS; i++){
        printf("\t%d\t ", n[i]);
        for(int j = 0; j < COLS; j++){
            printf("\t  %.2f\t", score[i][j]);
            sum += score[i][j];
        }
        printf("\t%.2f", sum);
        putchar('\n');
        sum = 0;
    }
}

void findMaxScore(int n[ROWS], float score[ROWS][COLS]){
    float maxScore = 0;

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            if(score[i][j] > maxScore){
                maxScore = score[i][j]; 
            }
        }
        printf("Student %d has the max score is %.2f\n" , n[i], maxScore);
        maxScore = 0;
    }
    putchar('\n');
}

void sumOfScore(int n[ROWS], float score[ROWS][COLS]){
    float sum = 0;

    for(int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){
            sum += score[i][j];
        }
        printf("Student %d has a total score of %.2f\n" , n[i], sum);
        sum = 0;
    }
    putchar('\n');
}