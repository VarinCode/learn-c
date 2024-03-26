#include <stdio.h>

int main(){
    int cTemp , fTemp;

    printf("Celsius: ");
    scanf("%d" , &cTemp);
    fTemp = (cTemp * 1.8) + 32;
    printf("Fahrenheit: %d" , fTemp);
}