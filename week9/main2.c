#include <stdio.h>

int main(){
    char mode[2] = "r";
    char pathData[] = "C:\\Users\\ACER USER5949486\\Desktop\\learn-c\\week9\\data.txt";
    FILE *dataFile = fopen(pathData, mode);

    char name[100];
    float number;
    float price;
    float total;

    for(int i = 0; i < 3; i++){
        fscanf(dataFile, "%f-%f-%s" , &number, &price, name);
        total = price * number;
        printf("Name = %s\tNumber = %d\tPrice = %.2f\tTotal = %.2f\n", name, (int)number, price, total);
    }

    fclose(dataFile);

    return 0;
}