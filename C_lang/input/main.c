#include <stdio.h>
#include <string.h> 

void main(){
    /** ฟังชันก์ scanf() คือการรับค่าข้อมูลโดยสามารถรับค่าข้อมูลด้หลายชนิด
     * * การรับค่า scanf("สัญลักษณ์ของชนิดข้อมูลที่จะรับค่า" , ตัวแปรที่รับค่า)
     * ? การเติม & และ ไม่เติม & นำหน้าตัวแปร
        * * การใช้ & คือรับข้อมูลที่เป็นตัวเลข และ ทศนิยม หรือ ตัวอักษร(char)
        * * ไม่ใช้ & คือรับข้อมูลเป็น ข้อความ(string) 
     * * ข้อกำหนดในการใช้
        * * ช่องแรกต้องเติม Double quote เสมอ และไม่สามารถพิมพ์ข้อความอย่างอื่นได้นอกจากสัญลักษณ์เท่านั้น
        * * การใช้สํญลักษณ์ชนิดข้อมูลใช้ในแบบเดียวกับ ฟังชันก์ printf() ได้เลย
        * * ต้องมีการสร้างตัวแปรก่อนเสมอและใส่ใน scanf() เพื่อรับค่าข้อมูล
     */

    // ตัวอย่างที่ 1
    char letter;
    puts("What you like a letter any");
    scanf("%c" , &letter);
    printf("you like letter %c" , letter);

    // ตัวอย่างที่ 2
    int x , y;
    printf("Please select 2 numbers to add together >>> ");
    scanf("%d %d" , &x , &y);
    long total = x + y;
    printf("Total : %d" , total);

    // ตัวอย่างที่ 3
    char fname[50] = "";
    char lname[50] = "";

    printf("What your firstname >>> ");
    scanf("%s" , fname);
    printf("What your lastname >>> ");
    scanf("%s" , lname);

    char fullname[100] = "";
    strcpy(fullname , "Mr. ");
    strcat(fullname , fname);
    strcat(fullname , " ");
    strcat(fullname , lname);
    printf("Your name is %s" , fullname);

    // ตัวอย่างที่ 4
    float a , b;
    printf("Float number a: ");
    scanf("%f" , &a);
    printf("Float number b: ");
    scanf("%f" , &b);
    printf("%g / %g = %g" , a , b , a / b);

   //  ตัวอย่างที่ 5
   int quanity , price;
   long total2 = 0;
   printf("quanity >> ");
   scanf("%d", &quanity);
   printf("price >> ");
   scanf("%d", &price);
   total2 = quanity * price;
   printf("Total : %d" , total2);
}