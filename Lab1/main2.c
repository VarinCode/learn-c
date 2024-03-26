#include "stdio.h"
int main(){
    int x , y;
    y = 5;
    x = y++;
    printf("x = %d, y = %d\n", x, y);
    y = 5;
    x = ++y;
    printf("x = %d, y = %d\n", x, y);
}