#include <stdio.h>

int main(){
    char subject[] = "Turbo C";

    printf("%12s\n", subject);
    printf("%-11s\n", subject);
    printf("%.5s\n", subject);
    printf("%.6s\n", subject);
    printf("%s\n", subject);

    return 0;
}