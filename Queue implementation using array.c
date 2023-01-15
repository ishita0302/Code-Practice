#include<stdio.h>
#define n 5

int main()
{
    int queue[n],ch=1,front=-1,rear=-1,i,j=0,x=n;
    printf("\n1.Insertion \n2.Deletion \n3.Display \n4.Exit");
    while(ch)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                    if(rear==x)
                        printf("\n Queue is Full.");
                    else
                    {
                        printf("\n Enter number: ");
                        rear++;
                        scanf("%d",&queue[rear]);
                        if(j!=0)
                            front=front;
                        else
                        {   front++;
                            j=1;
                        }
                    }
                    break;
                    
            case 2:
                    if((front==-1)&&(rear==-1))
                        printf("\n Queue is Empty");
                    else if(front==rear)
                    {
                        printf("\n Deleted Element is %d",queue[front]);
                        front=rear=-1;
                    }
                    else
                    {
                        printf("\n Deleted Element is %d",queue[front]);
                        front++;
                    }
                    break;
                    
            case 3:
                    if((front==-1)&&(rear==-1))
                        printf("\n Queue is Empty");
                    if(front==rear)
                        printf("%d\n",queue[front]);
                    else
                    {
                        printf("\nQueue is:\n ");
                        for(i=front; i<=rear; i++)
                        {
                            printf("%d",queue[i]);
                            printf("\n");
                        }
                    }
                    break;
                    
            case 4:
                    break;
                    
            default:
                    printf("\ninvalid");
        };
    }
    
    return 0;
}