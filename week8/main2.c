#include <stdio.h>
#define SIZE 10

int main(){
    int data[SIZE];
    int *pt_data[SIZE];
    int num;

    for(int i = 0; i < SIZE; i++){
        printf("Insert Number %d:", i + 1);
        scanf("%d", &num);
        data[i] = num;
        pt_data[i] = &data[i];
    }


    printf("\n----- Result -----");
    for(int j = SIZE; j > 0; j -= 2){
        printf("\nposition %d => address: %p and value is: %d", j , pt_data[j - 1], *pt_data[j - 1]);
    }

    return 0;
}