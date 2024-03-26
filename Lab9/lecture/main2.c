#include <stdio.h>
#define SIZE 5

typedef struct {
    char id[11];
    char firstname[20];
    char lastname[20];
    char GPA[4];
} student;

int main(){
    FILE *ptf;
    char mode[2] = "w";
    char pathFile[] = "C:\\Users\\ACER USER5949486\\Desktop\\learn-c\\week9\\std.txt";
    ptf = fopen(pathFile, mode);

    student stds[SIZE];

    for(int i = 0; i < SIZE; i++){
        printf("\nStudent %d\n", i + 1);
        printf("Enter id :");
        scanf("%s" , stds[i].id);
        printf("Enter firstname :");
        scanf("%s" , stds[i].firstname);
        printf("Enter lastname :");
        scanf("%s" , stds[i].lastname);
        printf("Enter GPA :");
        scanf("%s" , stds[i].GPA);
    }

    for(int j = 0; j < SIZE; j++){
        fprintf(ptf, "Student %d\n", j + 1);
        fputs("Name = " , ptf);
        fputs(stds[j].firstname , ptf);
        fputs(" ", ptf);
        fputs(stds[j].lastname , ptf);
        fputs("\nid = ", ptf);
        fputs(stds[j].id , ptf);
        fputs("\nGPA = ", ptf);
        fputs(stds[j].GPA, ptf);
        fputs("\n-------------\n\n", ptf);
    }

    fclose(ptf);
    return 0;
}