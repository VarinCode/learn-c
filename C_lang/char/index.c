#include "stdio.h"
#include "ctype.h"

void main(){
    // function ในการตรวงสอบอักขระโดยจะการคืนค่ากลับมาเป็นตัวเลข 0(false) หรือ 1(true)
    // function ที่จะได้นำเอาไปใช้งานอยู่บ่อยๆ

    //* isdigit ตรวจสอบอักขระที่ส่งไปว่าอยู่ในช่วงตัวเลข 0 - 9 หรือไม่
    int n;
    n = isdigit('4'); // 1
    n = isdigit('g'); // 0
    printf("%d" , n);

    //* isblank ตรวจสอบอักขระที่ส่งไปว่าเป็นอักขระหรือไม่ตัวอักษรหรือไม่
    n = isblank(' '); // 1
    n = isblank('a'); // 0
    printf("%d" , n);

    //* islower ตรวจสอบอักขระว่าเป็นตัวพิมพ์เล็กหรือไม่ 
    printf("%d" , islower('3')); // 0
    printf("%d" , islower('a')); // 2 (ไม่จำเป็น 1 เสมอไปยังไงเป็นค่า truly สมารถนำไปใช้ควบคุมการทำงานของคำสั่งได้เหมือนกัน)
    printf("%d" , islower('A')); // 0

    //* isupper ตรวจสอบอักขระว่าเป็นตัวพิมพ์ใหญ่หรือไม่ 
    printf("%d" , isupper('K')); // 1
    printf("%d" , isupper('k')); // 0
    printf("%d" , isupper('4')); // 0

    //* isalnum ตรวจสอบ เลข อักษระ พิมพ์เล็ก พิมพ์ใหญ่ ไว้ตรวจสอบพวกสัญลักษณ์พิเศษ
    printf("%d" , isalnum('7')); // 4
    printf("%d" , isalnum('a')); // 2
    printf("%d" , isalnum('A')); // 1
    printf("%d" , isalnum('/')); // 0
}