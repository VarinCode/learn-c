#include<stdio.h>
int main() {
    int num;
    printf("num = ");
    scanf("%d", &num);
    if (num%2 == 0)
    printf(" %d is even number \n", num);
    else
    printf(" %d is odd number \n", num);
    printf("Good Bye");
    return 0;
}