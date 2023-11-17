#include "stdio.h"

void func(char text[100]);

void main(){
    func("Hello Wolrd!");
}

void func(char text[100]){
    puts(text);
}