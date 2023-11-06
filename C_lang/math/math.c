#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    // ? การใช้งานฟังชันก์ทางคณิตศาสตร์ต่างๆที่ใช้งานบ่อยๆ /

    // * ฟังชันก์ ceil(เลขทศนิยม) จะปัดทศนิยมขึ้น
    short c1 = ceil(3.222);
    short c2 = ceil(1.90322);
    short c3 = ceil(54.0);
    int c4 = ceil(-7.1);
    int c5 = ceil(-24.21);
    printf("c1 = %d\nc2 = %d\nc3 = %d\nc4 = %d\nc5 = %d\n", c1, c2, c3, c4, c5);
    /*  output:
            c1 = 4
            c2 = 2
            c3 = 54
            c4 = -7
            c5 = -24
    */

    // * ฟังชันก์ floor(เลขทศนิยม) จะปัดทศนิยมลง
    short f1 = floor(4.44);
    int f2 = floor(9.9999);
    long f3 = floor(88.64);
    short f4 = floor(-1.34);
    short f5 = floor(-9.54);
    printf("f1 = %d\nf2 = %d\nf3 = %d\nf4 = %d\nf5 = %d\n", f1, f2, f3, f4, f5);
    /* output:
        f1 = 4
        f2 = 9
        f3 = 88
        f4 = -2
        f5 = -10
    */

    // * ฟังชันก์ round(เลขทศนิยม) ปัดขึ้นเมื่อ ทศนิยมมากกว่าหรือเท่ากับ 0.5 ตำกว่า 0.5 ปัดลง
    short r1 = round(0.5);
    short r2 = round(0.3);
    short r3 = round(0.11);
    short r4 = round(0.51);
    short r5 = round(12.3);
    short r6 = round(8.9);
    printf("r1 = %d\nr2 = %d\nr3 = %d\nr4 = %d\nr5 = %d\nr6 = %d\n", r1, r2, r3, r4, r5, r6);
    /* output:
        r1 = 1
        r2 = 0
        r3 = 0
        r4 = 1
        r5 = 12
        r6 = 9
    */

    // * ฟังชันก์ pow(เลข , เลขที่ยกกำลัง) การยกกำลัง
    int p1 = pow(2, 2);
    int p2 = pow(3, 5);
    int p3 = pow(1, 9);
    printf("p1 = %d\np2 = %d\np3 = %d\n", p1, p2, p3);
    /* output:
        p1 = 4
        p2 = 243
        p3 = 1
    */

    // * ฟังชันก์ pow(เลข , เลขที่ยกกำลัง) ตัดเลขทศนิยมทิ้ง
    short t1 = trunc(9.32);
    short t2 = trunc(4.00);
    short t3 = trunc(2.8312);
    int t4 = trunc(117.732);
    printf("t1 = %d\nt2 = %d\nt3 = %d\nt4 = %d\n", t1, t2, t3, t4);
    /* output:
        t1 = 9
        t2 = 4
        t3 = 2
        t4 = 117
    */

    // * ฟังชันก์ sqrt(ตัวเลข) หารากที่ 2
    short s1 = sqrt(4);
    short s2 = sqrt(25);
    int s3 = sqrt(144);
    printf("s1 = %d\ns2 = %d\ns3 = %d\n", s1, s2, s3);
    /* output:
        s1 = 2
        s2 = 5
        s3 = 12
    */

    // * ฟังชันก์ abs(ตัวเลขที่ติดลบ) เอาเลขจำนวนเต็มบวก
    // อ้างอิง header stdlib.h แทน math.h
    short a1 = abs(-5);
    short a2 = abs(-6.3);
    short a3 = abs(-10.94);
    short a4 = abs(9);
    printf("a1 = %d\na2 = %d\na3 = %d\na4 = %d\n", a1, a2, a3 , a4);
    /* output:
        a1 = 5
        a2 = 6
        a3 = 10
        a4 = 9
    */
}