#include <stdio.h>

int main(){
    int num = 10;
    int *pt = &num;

    printf("address num : %p\n" , &num);
    printf("address pt : %d\n" , *pt);

    *pt = *pt - 199;
    printf("num : %d\n" , num);
    printf("pt : %d" , *pt);
}