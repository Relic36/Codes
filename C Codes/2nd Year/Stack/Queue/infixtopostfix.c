/*4. Infix to Postfix Conversion
Convert a given infix expression into its postfix equivalent using a stack.*/
#include <stdio.h>
#include <ctype.h>

#define MAX 100

// Stack structure
char stack[MAX];
int top = -1;

// Stack operations
void push(char item) {
    if (top < MAX - 1) {
        stack[++top] = item;
    }
}

char pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return '\0';
}

char peek() {
    if (top >= 0) {
        return stack[top];
    }
    return '\0';
}

// Function to get precedence of operators
int precedence(char op) {
    switch (op) {
        case '^': return 3;
        case '*':
        case '/': return 2;
        case '+':
        case '-': return 1;
        default:  return 0;
    }
}

// Function to convert infix to postfix
void infixToPostfix(char* infix, char* postfix) {
    int i = 0, j = 0;
    char ch;

    while ((ch = infix[i++]) != '\0') {
        // If operand, add directly to postfix output
        if (isalnum(ch)) {
            postfix[j++] = ch;
        } 
        // If opening parenthesis, push to stack
        else if (ch == '(') {
            push(ch);
        } 
        // If closing parenthesis, pop until opening parenthesis is found
        else if (ch == ')') {
            while (top != -1 && peek() != '(') {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        } 
        // If operator
        else {
            while (top != -1 && precedence(peek()) >= precedence(ch)) {
                // '^' is right-associative, others are left-associative
                if (ch == '^' && peek() == '^') {
                    break;
                }
                postfix[j++] = pop();
            }
            push(ch);
        }
    }

    // Pop remaining operators from stack
    while (top != -1) {
        postfix[j++] = pop();
    }

    postfix[j] = '\0'; // Null-terminate postfix expression
}

int main() {
    char infix[MAX] = "A+(B*C-(D/E^F)*G)*H";
    char postfix[MAX];

    infixToPostfix(infix, postfix);

    printf("Infix Expression:   %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}