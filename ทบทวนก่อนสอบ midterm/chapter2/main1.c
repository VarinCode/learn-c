#include <stdio.h>

char grade = 'A';
char class[] = "C Programming";
int num1 = 10;
float num2 = 55;

int main(){
    putchar(grade); //A
    puts(class); //C Programming
    printf("class=%15s\n", class); //class= C Programming
    num1 = num1 * 5;
    num2 = num1;
    printf("num1=%5d,num2=%1.2f\n", num1, num2); //num1=   50,num2=50.00
    num1 *= 5;
    printf("num1=%d\n", num1 + 5); //num1=255
    --num1;
    printf("num1=%d\n",num1);//num1=249

    return 0;
}