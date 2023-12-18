#include <stdio.h>

void matrix1();
void matrix2();

//* แสดงเมทริกซ์เอกลักษณ์
void main(){
    matrix1();
    matrix2();
}

void matrix1(){
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 4; j++){
            if(i == j){
                printf("%d\t" , 1);
            } else{
                printf("%d\t" , 0);
            }
        }
        putchar('\n');
    }
}

void matrix2(){
    short i = 1 , j = 1;
    while(i <= 5){
        while(j <= 4){
            printf("%d\t" , i == j ? 1 : 0);
            j++;
        }
        j = 1;
        putchar('\n');
        i++;
    }
}