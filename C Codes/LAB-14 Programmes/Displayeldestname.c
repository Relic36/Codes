#include <stdio.h>
#include <string.h>
struct Student {
    char name[50];
    int age;
    char address[100];
};

int main(){
    struct Student students[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Address: ");
        scanf("%s", students[i].address);
    }
    int eldestIndex = 0;
    for(int i = 1; i < 3; i++) {
        if(students[i].age > students[eldestIndex].age) {
            eldestIndex = i;
        }
    }
    printf("The eldest student is:\n");
    printf("Name: %s\n", students[eldestIndex].name);

}