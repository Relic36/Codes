#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to remove newline from string
void removeNewline(char *str) {
    int len = strlen(str);
    if (len > 0 && str[len-1] == '\n') {
        str[len-1] = '\0';
    }
}

// Function to reverse a string
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str1[100], str2[100];  // Fixed declaration syntax
    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove newlines from input strings
    removeNewline(str1);
    removeNewline(str2);
    
    // Compare strings
    int cmp = strcmp(str1, str2);
    if (cmp == 0) {
        printf("The strings are equal.\n");
    } else if (cmp < 0) {
        printf("The first string is less than the second string.\n");
        printf("Difference: %d\n", cmp);
    } else {
        printf("The first string is greater than the second string.\n");
        printf("Difference: %d\n", cmp);
    }
    
    // Get string lengths
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);
    printf("Length of first string: %zu\n", len1);
    printf("Length of second string: %zu\n", len2);

    // Concatenate strings
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Copy second string to first
    strcpy(str1, str2);
    printf("After copying, first string: %s\n", str1);

    // Reverse string using our custom function
    reverseString(str1);
    printf("Reversed first string: %s\n", str1);

    return 0;
}    