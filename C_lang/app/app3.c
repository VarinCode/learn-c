#include <stdio.h>
#include <stdbool.h>

void main(){
    int number;
    unsigned long long sum = 1;
    printf("factorial >>> ");
    scanf("%d" , &number);

    if(number == 0 || number == 1 && number <= 60){
        printf("factorial %d! = 1"  , number);
    } else {
        for(int i = 1; i <= number; ++i){
            sum *= i;
        }
        printf("factorial %d! = %llu"  , number , sum);
    }
} 