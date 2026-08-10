#include <stdio.h>
#include <stdlib.h>
struct employee {
    char name[50];
    char gender[10];
    char designation[50];
    char department[50];
    float pay;
};
float GP(float pay){
    float gross_pay = pay + (0.25f * pay) + (0.7f * pay);
    return gross_pay;
}

int main(){
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee *employees = (struct employee *)malloc(n * sizeof(struct employee));

    for(int i = 0; i < n; i++) {
        struct employee e;
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", e.name);
        printf("Gender: ");
        scanf("%s", e.gender);
        printf("Designation: ");
        scanf("%s", e.designation);
        printf("Department: ");
        scanf("%s", e.department);
        printf("Pay: ");
        scanf("%f", &e.pay);
        employees[i] = e;
    }

    for (int i = 0; i < n; i++) {
        struct employee e = employees[i];
        printf("\nGrossPay of employee %d:\n", i + 1);
        printf("Name: %s\n", e.name);
        printf("Gross Pay: %.2f\n", GP(e.pay));
    }
    free(employees);
    return 0;
}