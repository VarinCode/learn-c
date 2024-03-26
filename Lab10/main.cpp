#include <iostream>
#include <string.h>
using namespace std;

class Employee {
    public:
    char name[50];
    char id[10];
    float salary;

    void showEmployee(void) {
        cout <<"Name: "<<name<<endl;
        cout <<"Id: "<<id<<endl;
        cout <<"Salary: "<<salary<<endl;
    }
};

int main() {
    Employee worker, boss;
    strcpy(worker.name, "Steve Job");
    strcpy(worker.id,"12345");
    worker.salary=20000;
    strcpy(boss.name, "Mark Zuckerberg");
    strcpy(boss.id,"11111");
    boss.salary=500000;

    worker.showEmployee();
    cout <<endl<<"******"<<endl;
    boss.showEmployee();
}