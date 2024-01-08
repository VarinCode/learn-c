#include <stdio.h>
#define MONTHS 12

int main(){
    float totalSalary = 0;
    float salary[MONTHS] = {
        250000.00, 250000.00, 250000.00, 250000.00, 250000.00, 
        250000.00, 250000.00, 250000.00, 250000.00, 250000.00, 
        250000.00, 250000.00
    };
    
    printf("Result\n\n");

    for(int i = 1; i <= MONTHS; i++){
        totalSalary += salary[i];
        printf("No Month : %d\n\n", i);
    }
    printf("Total Salary %.2f" , totalSalary);
}