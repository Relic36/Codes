#include <stdio.h>

int copy(char str1[], char str2[]){
    int i = 0;
    while (str2[i] != '\0' && str2[i] != '\n'){
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0'; 
    return 0;
}

int main(){
    char str1[100], str2[100];
    printf("Enter source string: ");
    fgets(str2, sizeof(str2), stdin);

    copy(str1, str2);
    printf("Copied string: %s\n", str1);
    return 0;
}