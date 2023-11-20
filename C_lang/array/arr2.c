//? การอ่านค่าจาก array
#include "stdio.h"

void main(){
    int arr[5] = {1 , 2 , 5 , [4]=10}; 
    // Elements: { 1 , 2 , 5 , 0 , 10 }
    // Indexs:     0 , 1 , 2 , 3 , 4

    // ชื่อของตัวแปร array[เลข index]
    printf("%d" , arr[0]);
    printf("\n%d" , arr[1]);
    printf("\n%d" , arr[2]);

    // การเข้าถึงสมาชิกของ array ทุกตวโดยใช้ for loop เพื่ออ้างถึงเลข index
    for(short i = 0; i < 5; i++){
        printf("%d" , arr[i]);
        putchar('\n');
    }

    int arr2[] = {1,23,54,67,6,868,65,453,5656,777,89,8,453454,65,76,342,6557};
    // ถ้าขนาดของ array มีมากเกินไปและต้องการเข้าถึงสมาชิกทุกตัวให้ใช้ function sizeof(คืนค่ากลับมาเป็นตัวเลขจำนวนเต็มบวก)
    /*          จำนวนขนาดของแต่ละชนิดข้อมูล
        short       ->  2 bytes
        int         ->  4 bytes
        long        ->  4 bytes
        long long   ->  8 bytes
        char        ->  1 bytes
        float       ->  4 bytes
        double      ->  8 bytes
        จำนวนสมาชิกใน array = (ชนิดข้อมูลของ array * จำนวนขนาดของ array) / ชนิดข้อมูลของ array
    */
    short size = sizeof(arr2) / sizeof(arr2[0]);

    for(short i = 0; i < size; i++){
        printf("%d" , arr2[i]);
        putchar('\n');
    }
}