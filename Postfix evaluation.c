#include<stdio.h>
#include<ctype.h>
int stack[20];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char a[20];
    char *x;
    int n1,n2,n3,num;
    printf("Enter the expression : ");
    scanf("%s",a);
    x = a;
    while(*x != '\0')
    {
        if(isdigit(*x))
        {
            num = *x - 48;
            push(num);
        }
        else
        {
            n1 = pop();
            n2 = pop();
            switch(*x)
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(n3);
        }
        x++;
    }
    printf("\nThe result of expression %s  =  %d\n\n",a,pop());
    return 0;
}