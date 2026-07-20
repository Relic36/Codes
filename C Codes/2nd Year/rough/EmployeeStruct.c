#include <stdio.h>
#include <string.h>

struct employee {
    int employeeID;
    char name[50];
    float salary;
};

int main(){
    struct employee e1;
    struct employee *ptr = &e1;
    e1.employeeID = 101;
    strcpy(e1.name, "Crazy One");
    e1.salary = 50000.0;

    printf("Employee ID: %d\n", ptr->employeeID);
    printf("Employee Name: %s\n", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);
}