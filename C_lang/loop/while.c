#include <stdio.h>

void main(){
    short n = 1;

    while(n <= 100){
        n % 2 == 0 ? printf("%d is even" , n) : printf("%d is odd" , n);
        putchar('\n');
        n++;
    }
}