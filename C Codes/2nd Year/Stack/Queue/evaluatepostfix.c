#include <stdio.h>
#include <ctype.h>

#define MAX 100

// Integer stack structure
int stack[MAX];
int top = -1;

// Stack operations
void push(int value) {
    if (top < MAX - 1) {
        stack[++top] = value;
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    return 0;
}

// Function to evaluate a postfix expression
int evaluatePostfix(char* expression) {
    int i = 0;
    char ch;

    while ((ch = expression[i++]) != '\0') {
        // If operand (digit), convert char to int and push to stack
        if (isdigit(ch)) {
            push(ch - '0');
        } 
        // If operator, pop two elements, perform operation, and push result back
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int val2 = pop(); // Second operand
            int val1 = pop(); // First operand

            switch (ch) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
    }

    return pop(); // Final result
}

int main() {
    char expression[MAX] = "231*+9-";

    int result = evaluatePostfix(expression);

    printf("Postfix Expression: %s\n", expression);
    printf("Evaluation Result:  %d\n", result);

    return 0;
}