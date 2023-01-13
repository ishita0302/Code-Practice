#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node*link;
}*rear,*front;

void enq(int n);
void deq();
void print();

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
    
    print();
    deq();
    deq();
    print();
    return 0;
}

//enqueue data
void enq(int n)
{
    struct node*a;
    a=(struct node*)malloc(sizeof(struct node));
    a->data=n;
    a->link=NULL;
    if((rear==NULL)&&(front==NULL))
    {
        rear=a;
        front=a;
    }
    else
    {
        rear->link=a;
        rear=a;
        a->link=front;
    }
}

//dequeue data
void deq()
{
    int n;
    struct node*b;
    b=front;
    if((front==NULL)&&(rear==NULL))
    {
        printf("\nqueue is empty.");
    }
    else if(front==rear)
    {
        n=b->data;
        front=rear=NULL;
        free(b);
    }
    else
    {
            n=b->data;
            front=front->link;
            rear->link=front;
            free(b);
    }
    printf("\ndeleted: %d", n);
}

//printing queue
void print()
{ 
	struct node* c;
	c = front;
	if((front==NULL)&&(rear==NULL))
		printf("\nQueue is Empty");
	else
	{
		do
		{   printf("\n%d",c->data);
			c = c->link;
		}while(c != front);
	}
}