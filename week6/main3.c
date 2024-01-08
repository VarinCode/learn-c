#include <stdio.h>
#define MONTHS 12

int main(){
    float totalSalary = 0;
    float salary[MONTHS];
    float inputSalary;
    short count = 0;

    while(count != MONTHS){
        printf("Enter salary for month %d : ", count + 1);
        scanf("%f" , &inputSalary);
        if(inputSalary < 15000){
            printf("Salary is incorrect. Please enter a salary that is less than 15k\n");
        } else {
            salary[count] = inputSalary;
            totalSalary += salary[count];
            count++;
        }
    }

    puts("Result\n");
    for(int i = 1; i <= MONTHS; i++){
        printf("No Month : %d\n", i);
        printf("Salary : %g\n", salary[i - 1]);
    }
    printf("\nTotal Salary %g" , totalSalary);
}