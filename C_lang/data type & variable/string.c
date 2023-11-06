#include <stdio.h>
#include <string.h>

int main(){

    // * การรับข้อมูลของทั้ง 2 function ได้แก่ (รับข้อมูลตัวแปร , "ข้อมูล string")
    // การคัดลอก ข้อความ (ถ้ามีข้อความอยู่แล้วจะถือว่าเป็นการแทนที่)
    char txt1[100] = "";
    strcpy(txt1 , "นี้คือการคัดลอกข้อความ"); 
    printf("%s", txt1);
    putchar('\n');

    char txt2[50] = "ข้อความก่อน";
    strcpy(txt2 , "ข้อความที่ถูกคัดลอกแล้ว");
    printf("%s" , txt2);
    putchar('\n');

    // การเพิ่มข้อความ หรือ ต่อข้อความจากข้อความเดิม
    char txt3[]= "How are ";
    strcat(txt3 , "you");
    puts(txt3);

    char txt4[] = "1";
    strcat(txt4 , " + ");
    strcat(txt4 , "1");
    printf("%s = %d" , txt4 , 2);
    putchar('\n');

    strcpy(txt4 , "เปลี่ยนเป็นข้อความใหม่");
    puts(txt4);
}