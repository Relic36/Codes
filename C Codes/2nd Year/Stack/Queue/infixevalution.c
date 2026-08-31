/*WAP to evaluate an infix expression using stack*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

#define MAX 100

int valueStack[MAX];
char opStack[MAX];
int topValue = -1;
int topOp = -1;

void pushValue(int value) {
    if (topValue >= MAX - 1) {
        printf("Value stack overflow\n");
        exit(1);
    }
    valueStack[++topValue] = value;
}

int popValue() {
    if (topValue < 0) {
        printf("Stack underflow while popping value\n");
        exit(1);
    }
    return valueStack[topValue--];
}

void pushOp(char op) {
    if (topOp >= MAX - 1) {
        printf("Operator stack overflow\n");
        exit(1);
    }
    opStack[++topOp] = op;
}

char popOp() {
    if (topOp < 0) {
        printf("Stack underflow while popping operator\n");
        exit(1);
    }
    return opStack[topOp--];
}

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
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
        case '^': return (int)pow(a, b);
        default:
            printf("Invalid operator\n");
            exit(1);
    }
}

void reduce() {
    char op = popOp();
    int b = popValue();
    int a = popValue();
    pushValue(applyOperator(a, b, op));
}

int main() {
    char expression[MAX];
    int i;

    printf("Enter infix expression: ");
    scanf("%s", expression);

    for (i = 0; expression[i] != '\0'; i++) {
        char ch = expression[i];

        if (isdigit(ch)) {
            int num = 0;
            while (isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }
            i--;
            pushValue(num);
        }
        else if (ch == '(') {
            pushOp(ch);
        }
        else if (ch == ')') {
            while (topOp >= 0 && opStack[topOp] != '(') {
                reduce();
            }

            if (topOp < 0 || opStack[topOp] != '(') {
                printf("Invalid expression: mismatched parentheses\n");
                return 1;
            }

            popOp();
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^') {
            while (topOp >= 0 && opStack[topOp] != '(' && precedence(opStack[topOp]) >= precedence(ch)) {
                reduce();
            }
            pushOp(ch);
        }
        else {
            printf("Invalid character in expression\n");
            return 1;
        }
    }

    while (topOp >= 0) {
        if (opStack[topOp] == '(') {
            printf("Invalid expression: unmatched '('\n");
            return 1;
        }
        reduce();
    }

    if (topValue != 0) {
        printf("Result = %d\n", valueStack[topValue]);
        return 0;
    }

    printf("Result = %d\n", valueStack[topValue]);
    return 0;
}
