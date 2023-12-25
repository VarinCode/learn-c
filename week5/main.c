#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
    char university[40] , campus[40];

    printf("Input String: ");
    scanf("%[^\n]" , university);
    printf("Lower String: ");
    for(int i = 0; i < strlen(university); i++){
        printf("%c" , tolower(university[i]));
    }

    putchar('\n');
    getchar();

    printf("Input String: ");
    scanf("%[^\n]" , campus);
    printf("Upper String: ");
    for(int j = 0; j < strlen(campus); j++){
        printf("%c" , toupper(campus[j]));
    }
}