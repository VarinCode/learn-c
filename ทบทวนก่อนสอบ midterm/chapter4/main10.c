#include <stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i = num; i >= 0; i--){
        for(int j = 0; j < i; j++){
            printf("%d", i);
        }
        putchar('\n');
    }

    return 0;
}