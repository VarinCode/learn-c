#include <stdio.h>
#include <string.h>

void main(){
    int score;
    char grade[5];
    
    printf("Enter your score : ");
    scanf("%d" , &score);

    if(score >= 80 && score <= 100){
        strcpy(grade , "A");
    } else if(score >= 75 && score <= 79){
        strcpy(grade , "B+");
    } else if(score >= 70 && score <= 74){
        strcpy(grade , "B");
    } else if(score >= 65 && score <= 69){
        strcpy(grade , "C+");
    }else if(score >= 60 && score <= 64){
        strcpy(grade , "C");
    }else if(score >= 55 && score <= 59){
        strcpy(grade , "D+");
    }else if(score >= 50 && score <= 54){
        strcpy(grade , "D");
    } else{
        strcpy(grade , "F");
    }

    printf("your grade is %s" , grade);
}