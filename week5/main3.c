#include <stdio.h>

const int TIMES = 5;

int min(int n[TIMES]){
    int min = 0;
    for(int j = 0; j < TIMES; j++){
        if(n[j] < min){
            min = n[j];
        } else if(j == 0) {
            min = n[j];
        } else continue;
    }
    return min;
}

int max(int n[TIMES]){
    int max = 0;
    for(int k = 0; k < TIMES; k++){
        if(n[k] > max){
            max = n[k];
        } else continue;
    }
    return max;
}

int main(){
    int nums[TIMES];

    for(int i = 0; i < TIMES; i++){
        printf("Enter number%d : " , i + 1);
        scanf("%d" , &nums[i]);
    }

    printf("min : %d\n" , min(nums));
    printf("max : %d\n" , max(nums));
}