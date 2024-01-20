#include <stdio.h>

int main(){
    float value1 = -1.25, value2 = 15.12345;

    printf("Value1 = %-7.0f\n", value1);
    printf("Value2 = %-6.2f\n", value2);
    printf("Value1 = %.2f\n", value1);
    printf("Value2 = %8.2f\n", value2);
    printf("Value2 = %.2f\n", value2);

     return 0;
}