#include <stdio.h>

void main(){
    int n1 , n2;

    printf("Enter number 1 : ");
    scanf("%d" , &n1);
    printf("Enter number 2 : ");
    scanf("%d" , &n2);

    if(n1 > n2){
        printf("%d is grater than %d" , n1 , n2);
    } else if(n1 == n2){
        printf("%d is equal %d" , n1 , n2);
    } else if(n1 < n2){
        printf("%d is less than %d" , n1 , n2);
    }
}
