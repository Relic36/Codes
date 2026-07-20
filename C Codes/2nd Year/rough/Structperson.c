#include <stdio.h>
#include <stdlib.h>

struct person {
    char name[50];
    int age;
};

int main(){
    struct person *ptr = (struct person *)malloc(sizeof(struct person));
    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter age: ");
    scanf("%d", &ptr->age);
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    free(ptr);
    return 0;
}