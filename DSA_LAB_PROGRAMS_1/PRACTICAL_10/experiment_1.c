/*Write a program and algorithm for
conversion from Infix Expression to Postfix
Expression.*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int prec(char ch);
void conversion(char str[]);
void main()
{
    system("CLS");
    int i, x;
    char expression[50];
    printf("\nEnter Infix Expression : ");
    gets(expression);
    printf("\n\nPostfix Expression : ");
    conversion(expression);
    getch();
}

int prec(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
        return -1;
}

void conversion(char str[])
{
    int n = strlen(str);
    char stack[n];
    char postfix[n + 1];
    int top = -1;
    int j = 0, k;
    for (k = 0; k < n; k++)
    {
        char c = str[k];
        if (c == '(')
        {
            stack[++top] = '(';
        }
        else if (c == '^' || c == '*' || c == '/' || c == '-' || c == '+')
        {
            while (top != -1 && (prec(c) < prec(stack[top]) || prec(c) ==
                                                                   prec(stack[top])))
            {
                postfix[j++] = stack[top--];
            }
            stack[++top] = c;
        }
        else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        {
            postfix[j++] = c;
        }
        else
        {
            while (top != -1 && stack[top] != '(')
            {
                postfix[j++] = stack[top--];
            }
            top--;
        }
    }
    while (top != -1)
    {
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    printf("%s\n", postfix);
}
