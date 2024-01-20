#include "stdio.h"

void main(){
    // ใช้ pointer จัดการข้อความใน array
    char *colors[5] = { "red" , "black" , "white" , "yellow" , "green" };
    // แก้ไขค่าใน element
    colors[1] = "ornage";

    printf("this color is %s" , colors[1]);
}