#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if(top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char a[100];
    char *y, x;
    printf("Enter the expression : ");
    scanf("%s",a);
    printf("\n");
    y = a;
    
    while(*y != '\0')
    {
        if(isalnum(*y))
            printf("%c ",*y);
        else if(*y == '(')
            push(*y);
        else if(*y == ')')
        {
            while((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while(priority(stack[top]) >= priority(*y))
                printf("%c ",pop());
            push(*y);
        }
        y++;
    }
    
    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}