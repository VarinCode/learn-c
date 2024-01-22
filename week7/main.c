#include <stdio.h>

int main() {
    struct test1 {
        int val[3];
        char arr[8];
        float salary;
    };
    printf("size of struct test1 is %d\n" , sizeof(struct test1));

    union test2 {
        int val[3];
        char arr[8];
        float salary;
    };
    printf("size of union test2 is %d\n" , sizeof(union test2));

    return 0;
}
