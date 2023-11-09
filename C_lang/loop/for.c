#include <stdio.h>

void main(){
    int n , sum = 0, average , number;

    printf("Enter number : ");
    scanf("%d" , &n);

    for(int i = 1; i <= n; ++i){
        printf("%d : " , i);
        scanf("%d" , &number);
        sum += number;
    }
    
    average = sum / n;
    printf("sum : %d" , sum);
    putchar('\n');
    printf("average : %d" , average);
}