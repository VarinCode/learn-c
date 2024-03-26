#include "stdio.h"
#include "math.h"

void body(const double BMIValue){
    char *category;

    if(BMIValue > 30){
        category = "Obese";
    } else if (BMIValue >= 25 && BMIValue <= 30){
        category = "Overweight";
    } else if (BMIValue >= 18.5 && BMIValue <= 25){
        category = "Normal";
    } else {
        category = "Underweight";
    }

    printf("BMI : %g\n" , BMIValue);
    printf("Category : %s\n" , category);
}

void main(){
    float height , weight;
    double mheight;

    printf("Enter your height :");
    scanf("%f" , &height);
    // หาส่วนสูงในหน่วยเมตร แปลง cm -> m
    mheight = (float)height / (float)100;
    
    printf("Enter your weight : ");
    scanf("%f" , &weight);

    const double BMI = weight / pow(mheight , 2);
    body(BMI);
}