#include <stdio.h>

typedef struct {
    char id[11];
    char firstname[20];
    char lastname[20];
    float GPA;
} student;

int main(){
    FILE *ptf;
    char pathFile[] = "C:\\Users\\ACER USER5949486\\Desktop\\learn-c\\week9\\std.txt";
    ptf = fopen(pathFile, "w");

    student std;

    printf("Enter your student id :");
    scanf("%s" , std.id);

    printf("Enter your firstname :");
    scanf("%s" , std.firstname);

    printf("Enter your lastname :");
    scanf("%s" , std.lastname);

    printf("Enter your GPA :");
    scanf("%f" , &std.GPA);

    fprintf(ptf, "Student\n");
    fprintf(ptf, "name = %s %s\n" , std.firstname, std.lastname);
    fprintf(ptf, "id = %s\n" , std.id);
    fprintf(ptf, "GPA = %.2f" , std.GPA);

    fclose(ptf);
    return 0;
}