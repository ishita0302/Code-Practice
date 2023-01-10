#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*link;
};

void push(struct node**s, int n);
int pop(struct node**s);

int main()
{
    struct node*top;
    int item,del,ch;
    top=NULL;
    do
    {   printf("enter the numbers: ");
        scanf("%d", &item);
        push(&top,item);
        printf("\npress 1 to enter more and 0 to stop: ");
        scanf("%d", &ch);
    }while(ch!=0);
    
    if (top == NULL)
        printf("\nStack is empty.");
    else 
    {
        printf("\nstack is: \n");
        struct node *temp = top;
        while (temp->link != NULL) 
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
        printf("%d\n", temp->data);
    }
    
    del=pop(&top);
    printf("\npopped: %d", del);
    del=pop(&top);
    printf("\npopped: %d", del);
    
    if (top == NULL)
        printf("\nStack is empty.");
    else 
    {
        printf("\nstack is: \n");
        struct node *temp = top;
        while (temp->link != NULL) 
        {
            printf("%d\n", temp->data);
            temp = temp->link;
        }
        printf("%d\n", temp->data);
    }
    
    return 0;
}

//pushing an element
void push(struct node**s, int n)
{
    struct node*b;
    b=(struct node*)malloc(sizeof(struct node));
    b->data=n;
    b->link=*s;
    *s=b;
}

//poping an element
int pop(struct node**s)
{
    int x;
    struct node*c;
    if(*s==NULL)
    {    printf("\nstack is empty.\n");
         return -1;
    }
    else
    {
        c=*s;
        x=c->data;
        *s=c->link;
        free(c);
        return x;
    }
}