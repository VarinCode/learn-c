#include "stdio.h"

void main(){
    int arr[] = { 4 , 5 , 5 ,6 , 6};
    int *pt = &arr[0];
    *pt = 100;

    printf("pt = %d\n" , *pt);
    printf("arr[0] = %d" , arr[1]);


}   