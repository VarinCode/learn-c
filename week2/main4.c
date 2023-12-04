#include "stdio.h"

void main(){
    int a;
    float b, div; double d;
    //ให้ประกาศตัวแปร c ซึ1งมีชนิดเป็นตัวอักษร = ตัว
    char c = 'c';
    int i=15;
    //ให้ประกาศตัวแปร j มีชนิดเป็นเลขจำนวนเต็มพร้อมทัDงกำหนดให้มีค่าเท่ากับ H
    int j = 2;
    printf("size of int is %d\n",sizeof(int));
    printf("size of a is %d\n",sizeof(a));
    //ให้แสดงขนาดของ float และ ขนาดของตัวแปร d ออกทางจอภาพ
    printf("size of b is %d\n",sizeof(b));
    printf("size of d is %d\n",sizeof(d));
    printf("size of char or c is %d\n\n",sizeof(c));
    // div คือค่าผลหารของ i กับ j (j เป็นตัวหาร )
    div = i / j;
    printf("div = %f\n", div);
}