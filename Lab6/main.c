#include <stdio.h>
#include <stdbool.h>

struct sizeOfMatrix{
    int rows, cols;
};
struct sizeOfMatrix size = { .rows = 0, .cols = 0 };

int getRows();
int getColumns();
void showMatrix(int rows, int columns, int matrix[rows][columns] , char name);
void sumOfMatrix(int rows, int columns, int matrixA[rows][columns], int matrixB[rows][columns]);

int main(){
    size.rows = getRows();
    size.cols = getColumns();
    putchar('\n');

    int matrixA[size.rows][size.cols];
    int matrixB[size.rows][size.cols];
    char A = 'A', B = 'B';

    //* matrix A
    printf("***** Input Matrix%c *****\n", A);
    for(short i = 0; i < size.rows; i++){
        for(short j = 0; j < size.cols; j++){
            printf("Please input Matrix%c[%d][%d] : " , A , i + 1, j + 1);
            scanf("%d", &matrixA[i][j]);
        }
    }
    showMatrix(size.rows, size.cols, matrixA, A);

    putchar('\n');

    //* matrix B
    printf("***** Input Matrix%c *****\n", B);
    for(short i = 0; i < size.rows; i++){
        for(short j = 0; j < size.cols; j++){
            printf("Please input Matrix%c[%d][%d] : " , B , i + 1, j + 1);
            scanf("%d", &matrixB[i][j]);
        }
    }
    showMatrix(size.rows, size.cols, matrixB, B);
    sumOfMatrix(size.rows, size.cols, matrixA, matrixB);
}

int getRows(){
    int rows;
    while(true){
        printf("Please input number of row : ");
        scanf("%d" , &rows);      
        if(rows > 20){
            rows = 0;
            printf("number of rows of matrix cannot more than 20.\n");
        } else {
            break;
        }
    }
    return rows;
    
}    

int getColumns(){
    int cols;
    while(true){
        printf("Please input number of column : ");
        scanf("%d" , &cols);
        if(cols > 20){
            cols = 0;
            printf("number of columns of matrix cannot more than 20.\n");
        } else {
            break;
        }
    }
    return cols;
}    

void sumOfMatrix(int rows, int columns, int matrixA[rows][columns], int matrixB[rows][columns]){
    printf("\n***** Result *****\n");
    for(short i = 0; i < size.rows; i++){
        for(short j = 0; j < size.cols; j++){
            printf("%d\t" , matrixA[i][j] + matrixB[i][j]);
        }
        putchar('\n');
    }
}    

void showMatrix(int rows, int columns, int matrix[rows][columns] , char name){
    printf("\n***** Matrix%c *****\n", name);

    for(short i = 0; i < rows; i++){
        for(short j = 0; j < columns; j++){
            printf("%d\t" , matrix[i][j]);
        }
        putchar('\n');
    }
}