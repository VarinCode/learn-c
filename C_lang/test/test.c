#include "stdio.h"

void main(){
    int n[5] = {};
    for(int i = 0; i < 5; i++){
        int number;
        printf("Enter number #%d : " , i + 1);
        scanf("%d" , &number);
        n[i] =  number;
    }

    for(int i = 0; i < 5; i++){
        printf("%d" , n[i]);
        putchar('\n');
    }
}
