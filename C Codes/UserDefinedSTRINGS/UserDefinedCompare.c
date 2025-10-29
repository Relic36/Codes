#include <stdio.h>
int compare(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}
int main(){
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    int result = compare(str1, str2);
    if (result == 0){
        printf("The strings are equal.\n");
    } else if (result < 0){
        printf("The first string is less than the second string.\n");
        printf("Difference: %d\n", result);
    } else {
        printf("The first string is greater than the second string.\n");
        printf("Difference: %d\n", result);
    }
    return 0;
}