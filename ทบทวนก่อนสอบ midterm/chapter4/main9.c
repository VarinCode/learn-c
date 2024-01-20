#include <stdio.h>

int main(){
    int row;

    printf("Please input the number of row : ");
    scanf("%d" , &row);

    for(int m = 1; m <= row; m++){
        for(int n = 1; n <= row; n++){
            printf("%d\t", m == n ? 0 : 1);
        }
        putchar('\n');
    }

    return 0;
}