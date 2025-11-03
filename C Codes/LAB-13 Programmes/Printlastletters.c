#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    int i;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
        len--;
    }
    
    printf("Last letters of each word: ");
    
    // Print last letter of each word
    for(i = 0; i < len; i++) {
        // If current character is letter and next character is space or end of string
        if((str[i] != ' ') && (str[i+1] == ' ' || str[i+1] == '\0')) {
            printf("%c ", str[i]);
        }
    }
    printf("\n");
    
    return 0;
}
