#include <stdio.h>
#include <stdbool.h>

void main(){
    int sum = 0 , avr , num , i = 0;

    while(true){
        printf("Enter number : ");
        scanf("%d" , &num);

        sum += num;
        i += 1;
        if(num == 0) {
            break;
        }
    }

    avr = sum / i;

    printf("sum = %d" , sum);
    putchar('\n');
    printf("avr = %d" , avr);
}



