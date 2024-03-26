#include <stdio.h>
#include <string.h>

void main(){
    int volume , cosmetics;
    float commission;
    char performance[30];

    printf("Enter a volume : ");
    scanf("%d" , &volume);

    if(volume <= 70000){
        commission = 0.03;
        strcpy(performance , "Low Performance");
    } else if(volume > 70000){
        commission = 0.07;
        strcpy(performance , "Good Performance");
    }

    cosmetics = volume * commission;

    printf("commission : %d\n" , cosmetics);
    printf("%s" , performance);
}

