/* Reverse a String using Stack
Read a string and reverse it using stack operations.*/
#include <stdio.h>
#include <string.h>

#define MAX 100

int top = -1;
char stack[MAX];

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    }
    return stack[top--];
}

int main() {
    char str[MAX];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    for (int i = 0; i < strlen(str); i++) {
        push(str[i]);
    }

    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}