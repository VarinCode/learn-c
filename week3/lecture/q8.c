#include <stdio.h>

void main(){
    int num;

    printf("Enter a integer number: ");
    scanf("%d" , &num);

    switch(num % 3){
        case 1:
            printf("1\n");
            break;
        default:
            printf("2\n");
    }
     
}