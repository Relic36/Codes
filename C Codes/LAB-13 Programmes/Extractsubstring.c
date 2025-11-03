#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // removing newline character if present
    int len = strlen(str);
    if ( len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
    printf("You entered: %s\n", str);
    int from, length;
    
    printf("Enter starting index: ");
    scanf("%d", &from);
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Extracted substring: ");
    for (int i = from; i < from + length && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }

}