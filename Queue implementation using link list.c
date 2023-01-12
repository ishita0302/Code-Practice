#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*link;
}*rear,*front;

void enq(int n);
int deq();

int main()
{
    int item,del,ch;
    rear=front=NULL;
    do
    {   printf("enter the numbers: ");
        scanf("%d", &item);
        enq(item);
        printf("\npress 1 to enter more and 0 to stop: ");
        scanf("%d", &ch);
    }while(ch!=0);
    
    del=deq();
    printf("\ndeleted: %d", del);
    del=deq();
    printf("\ndeleted: %d", del);
    
    return 0;
}

//enqueue data
void enq(int n)
{
    struct node*a;
    a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->link=NULL;
    if(rear==NULL)
    {
        rear=a;
        front=a;
    }
    else
    {
        a->link=rear;
        rear=a;
    }
}

//dequeue data
int deq()
{
    int n;
    struct node*b=rear;
    if(front==NULL)
    {
        printf("\nqueue is empty.");
        return -1;
    }
    else
    {
        if(front==rear)
        {
            n=b->data;
            front=rear=NULL;
            free(b);
        }
        else
        {
            while(b->link->link!=NULL)
            {   b=b->link;}
            n=b->link->data;
            free(b->link);
            b->link=NULL;
        }
    }
    return n;
}