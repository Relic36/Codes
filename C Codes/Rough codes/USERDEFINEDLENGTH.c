#include <stdio.h>
int length(char str[]){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = length(str);
    printf("Length of the string: %d\n", len - 1); // Subtract 1 to exclude newline character
    return 0;
}