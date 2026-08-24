/* 2. Balanced Parentheses using Stack
Given an expression containing (), {}, and [], 
use a stack to check whether the parentheses are balanced.*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int isMatching(char opening, char closing) {
	return (opening == '(' && closing == ')') ||
		   (opening == '{' && closing == '}') ||
		   (opening == '[' && closing == ']');
}

int main() {
	char expression[MAX];
	char stack[MAX];
	int top = -1;
	int balanced = 1;

	printf("Enter an expression: ");
	fgets(expression, MAX, stdin);

	for (int i = 0; expression[i] != '\0'; i++) {
		char current = expression[i];

		if (current == '(' || current == '{' || current == '[') {
			if (top == MAX - 1) {
				balanced = 0;
				break;
			}
			stack[++top] = current;
		}
		else if (current == ')' || current == '}' || current == ']') {
			if (top == -1 || !isMatching(stack[top], current)) {
				balanced = 0;
				break;
			}
			top--;
		}
	}

	if (top != -1) {
		balanced = 0;
	}

	if (balanced) {
		printf("Parentheses are balanced.\n");
	}
	else {
		printf("Parentheses are not balanced.\n");
	}

	return 0;
}