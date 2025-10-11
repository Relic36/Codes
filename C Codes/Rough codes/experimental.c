#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");

   scanf(" %c", &ch);

    if ((ch >= '0') && (ch <= '9')) {
        printf("You entered a number.\n");
    } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("You entered a letter.\n");
    } else {
        printf("You entered a special character.\n");
    }
}    