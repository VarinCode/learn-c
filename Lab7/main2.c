# include <stdio.h>
# include <string.h>

int main(){
    struct student {
        int code;
        char name[20];
        float salary
    };

    union student2 {
        int code;
        char name[20];
        float salary
    };

    struct student string1 = { 1,"steve", 100000 };
    union student2 string2 = { 1,"steve", 100000 };

    printf("%s\n", string2.name);
    printf("%d\n", string2.code);
    printf("%f\n", string2.salary);
}
