#include <stdio.h>

int main(){
    FILE *ptf;
    char mode[2] = "w";
    char pathProduct[] = "C:\\Users\\ACER USER5949486\\Desktop\\learn-c\\week9\\product.txt";
    char pathPrice[] = "C:\\Users\\ACER USER5949486\\Desktop\\learn-c\\week9\\price.txt";

    FILE *productFile = fopen(pathProduct, mode);
    FILE *priceFile = fopen(pathPrice, mode);

    char productName[100];
    float price;

    for(int i = 0; i < 3; i++){
        printf("Please input product name : \n");
        scanf("%s" , productName);
        printf("Please input product price : \n");
        scanf("%f" , &price);

        fprintf(productFile,"%s\n", productName);
        fprintf(priceFile, "%.2f\n" , price);

        printf("\n*******\n");
    }

    fclose(productFile);
    fclose(priceFile);

    return 0;
}
