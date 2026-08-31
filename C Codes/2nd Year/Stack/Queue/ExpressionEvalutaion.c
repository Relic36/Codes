/*WAP to evaluate an expression using stack*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#define MAX 100

void pushValue(int *stack, int *top, int value) {
    if (*top >= MAX - 1) {
        printf("Value stack overflow\n");
        exit(1);
    }
    stack[++(*top)] = value;
}

int popValue(int *stack, int *top) {
    if (*top < 0) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[(*top)--];
}

void pushOperator(char *stack, int *top, char value) {
    if (*top >= MAX - 1) {
        printf("Operator stack overflow\n");
        exit(1);
    }
    stack[++(*top)] = value;
}

char popOperator(char *stack, int *top) {
    if (*top < 0) {
        printf("Operator stack underflow\n");
        exit(1);
    }
    return stack[(*top)--];
}

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

int applyOperator(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                printf("Division by zero\n");
                exit(1);
            }
            return a / b;
        case '^':
            return (int)pow(a, b);
        default:
            printf("Invalid operator\n");
            exit(1);
    }
}

int main() {
    char expression[MAX];
    int valueStack[MAX];
    char operatorStack[MAX];
    int valueTop = -1;
    int operatorTop = -1;
    int i;

    printf("Enter an infix expression: ");
    scanf("%s", expression);

    for (i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if (isdigit((unsigned char)ch)) {
            pushValue(valueStack, &valueTop, ch - '0');
        }
        else if (ch == '(') {
            pushOperator(operatorStack, &operatorTop, ch);
        }
        else if (ch == ')') {
            while (operatorTop >= 0 && operatorStack[operatorTop] != '(') {
                char op = popOperator(operatorStack, &operatorTop);
                int b = popValue(valueStack, &valueTop);
                int a = popValue(valueStack, &valueTop);
                pushValue(valueStack, &valueTop, applyOperator(a, b, op));
            }

            if (operatorTop < 0 || operatorStack[operatorTop] != '(') {
                printf("Mismatched parentheses\n");
                return 1;
            }
            popOperator(operatorStack, &operatorTop); // remove '('
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            while (operatorTop >= 0 && operatorStack[operatorTop] != '(' &&
                   precedence(operatorStack[operatorTop]) >= precedence(ch)) {
                char op = popOperator(operatorStack, &operatorTop);
                int b = popValue(valueStack, &valueTop);
                int a = popValue(valueStack, &valueTop);
                pushValue(valueStack, &valueTop, applyOperator(a, b, op));
            }
            pushOperator(operatorStack, &operatorTop, ch);
        }
        else {
            printf("Invalid character in expression\n");
            return 1;
        }
    }

    while (operatorTop >= 0) {
        if (operatorStack[operatorTop] == '(') {
            printf("Mismatched parentheses\n");
            return 1;
        }

        char op = popOperator(operatorStack, &operatorTop);
        int b = popValue(valueStack, &valueTop);
        int a = popValue(valueStack, &valueTop);
        pushValue(valueStack, &valueTop, applyOperator(a, b, op));
    }

    if (valueTop != 0) {
        printf("Invalid expression\n");
        return 1;
    }

    printf("Result: %d\n", valueStack[valueTop]);
    return 0;
}