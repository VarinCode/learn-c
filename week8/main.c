#include <stdio.h>
#define SIZE 5

int main(){
    int data[SIZE] , num;
    int *pt_data;

    for(int i = 0; i < SIZE; i++){
        printf("Insert Number %d: " , i + 1);
        scanf("%d", &num);
        data[i] = num;
    }

    printf("\n----- Result -----");
    for(int j = SIZE - 1; j >= 0; j--){
        pt_data = &data[j];
        printf("\nposition %d => address: %p and value is: %d", j + 1 , pt_data, *pt_data);
    }
    return 0;
}