#include "stdio.h"

void main(){
    int min , max;
    int n;

    for (int i = 1; i <= 6; i++){
        scanf("%d" , &n);
        if(i == 1){
            min = n;
            max = n;
        }
        if(n < min){
            min = n;
        }
        if(n > max){
            max = n;
        }
    }

    printf("%d\n" , min);
    printf("%d" , max);
}