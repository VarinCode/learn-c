#include <stdio.h>

void main(){
    char currency;
    int amount;

    printf("Enter amount : ");
    scanf("%d" , &amount);

    printf("D : dollar currency\nY : yen currency\nK : won currency\n");
    printf("Exchange from Thai currency to : ");
    getchar();
    scanf("%c" , &currency);

    switch(currency){
        case 'D':
            printf("%d THB = %g USD", amount , amount / 33.46);
            break;
        case 'Y':
            printf("%d THB = %g JPY", amount , amount / 0.29);
            break;
        case 'K':
            printf("%d THB = %g KRW", amount , amount / 35.28);
    }
}