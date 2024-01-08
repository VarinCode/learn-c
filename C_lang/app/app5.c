#include <stdio.h>

struct sizeOfMatrix{
    int m;
    int n;
} size = { .m = 0, .n = 0 };

int getRows(int *rows);
// int getColumns(int *columns);

int main(){
    printf("Enter rows : %d", size.m);
    getRows(&size.m);

    printf("--> %d , %d" , size.m, size.m + 1);
}

int getRows(int *rows){
    scanf("%d" , rows);
}    