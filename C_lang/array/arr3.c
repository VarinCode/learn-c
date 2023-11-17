#include "stdio.h"

void main(){
    char *colors[5] = { "red" , "black" , "white" , "yellow" , "green" };
    colors[1] = "ornage";
    printf("this color is %s" , colors[1]);
}