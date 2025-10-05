#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
char stack[MAX];
int top = -1;

void push(char c)
{
    if (top < MAX - 1)
    {
        stack[++top] = c;
    }
}

char pop()
{
    if (top != -1)
    {
        return stack[top--];
    }
    return '\0'; // Return null character if stack is empty
}

char peek()
{
    if (top != -1)
    {
        return stack[top];
    }
    return '\0'; // Return null character if stack is empty
}

int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c)
{
    switch (c)
    {
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

void reverse(char *exp)
{
    int n = strlen(exp);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = exp[i];
        exp[i] = exp[n - i - 1];
        exp[n - i - 1] = temp;
    }
}

void infixToPostfix(char *infix, char *postfix)
{
    int k = 0;
    for (int i = 0; infix[i]; i++)
    {
        if (isalnum(infix[i]))
        {
            postfix[k++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            push(infix[i]);
        }
        else if (infix[i] == ')')
        {
            while (top != -1 && peek() != '(')
            {
                postfix[k++] = pop();
            }
            pop(); // Remove '(' from stack
        }
        else if (isOperator(infix[i]))
        {
            while (top != -1 && precedence(peek()) >= precedence(infix[i]))
            {
                postfix[k++] = pop();
            }
            push(infix[i]);
        }
    }
    while (top != -1)
    {
        postfix[k++] = pop();
    }
    postfix[k] = '\0'; // Null-terminate the postfix expression
}

void infixToPrefix(char *infix, char *prefix)
{
    reverse(infix);
    for (int i = 0; infix[i]; i++)
    {
        if (infix[i] == '(')
        {
            infix[i] = ')';
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
        }
    }
    char postfix[MAX];
    infixToPostfix(infix, postfix);
    reverse(postfix);
    strcpy(prefix, postfix);
}

int main()
{
    system("CLS");
    char infix[MAX], prefix[MAX];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPrefix(infix, prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}