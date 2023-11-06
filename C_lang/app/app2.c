#include <stdio.h>
#include <stdbool.h>

void grade(float number , bool myBool){
    const char TEXT[] = "your grade = ";
    int realNumber = (int)number;
    myBool ?  
        printf("%s %d" , TEXT ,  realNumber):
        printf("%s %.1f" , TEXT ,  number);
}

int main(){
    int score;
    bool isInteger = true , isDecimal = false;

    printf("your score >> ");
    scanf("%d" , &score);

    if(score >= 80 && score <= 100) { 
        grade(4 , isInteger);
    } else if(score >= 75 && score <= 79){
        grade(3.5 , isDecimal);
    } else if(score >= 71 && score <= 74){
        grade(3 ,isInteger);
    } else if(score >= 65 && score <= 69){
        grade(2.5 , isDecimal);
    } else if(score >= 61 && score <= 64){
        grade(2 , isInteger);
    } else if(score >= 55 && score <= 59){
        grade(1.5 , isDecimal);
    } else if(score >= 50 && score <= 54){
        grade(1 , isInteger);
    } else if(score < 50 && score >= 0){
        grade(0 , isInteger);
    } else if(score > 100 || score < 0){
        puts("The score range must be in the number 1 - 100 only.");
    } 
}