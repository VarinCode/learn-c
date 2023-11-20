#include <stdio.h>

void main(){
    int num, sum, length;
    printf("Please select a multiplication table template >>> ");
    scanf("%d", &num);
    printf("The length of the multiplic ation table >>> ");
    scanf("%d", &length);

    printf("multiplication table %d\n", num);

    for (int i = 1; i <= length; i++)
    {
        sum = num * i;
        printf("%d x %d = %d", num, i, sum);
        putchar('\n');
    }
}