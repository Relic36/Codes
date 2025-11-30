#include <stdio.h>

int main() {
    char name[50]; // Buffer to hold the user's name

    printf("Enter your name: ");

    // Read up to 49 characters from standard input (stdin)
    if (fgets(name, sizeof(name), stdin) != NULL) {
        printf("Hello, %s", name);
    } else {
        printf("Error reading input.\n");
    }
    name[strcspn(name, "\n")] = 0; // Remove newline character if present

    return 0;
}