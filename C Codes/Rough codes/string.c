#include <stdio.h>
#include <string.h>
int main (){
    char str1[100], str2[100];
    int i, flag = 0;
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    int length = strlen(str1);
    if (length > 0 && str1[length-1] == '\n') {
        str1[length-1] = '\0';
    }

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if(str1[i] != str2[i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 0 && str1[i] == '\0' && str2[i] == '\0') {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

}