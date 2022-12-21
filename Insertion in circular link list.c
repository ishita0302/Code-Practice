#include <stdio.h>
#include <stdlib.h>

struct node
{   int info;
    struct node*next;
};

int main()
{
    int ch,n1,c1,c2,y,x,p,z,count=1;
    struct node *head,*temp,*prev,*nw;
    
    //making first node
    nw=(struct node*)malloc(sizeof(struct node));
    if(nw==NULL)
    {   printf("memory is not allocated.");
    }
    else
    {
        printf("enter first node: ");
        scanf("%d", &n1);
        nw->info=n1;
        head=nw;
        nw->next=head;
    }
    printf("\n1. insert an element at begining.\n2. insert an element at end.\n3. insert an element at given position.\n4. exit. ");
    scanf("%d", &ch);
    
    switch(ch)
    {   case 1: //inserting at begining
                do
                {   struct node*b1;
                    b1=(struct node*)malloc(sizeof(struct node));
                    if(b1==NULL)
                    {   printf("memory is not allocated.");
                        
                    }
                    else
                    {
                        printf("enter value: ");
                        scanf("%d", &x);
                        b1->info=x;
                        b1->next=NULL;
                        temp=head;
                        do
                        {
                            temp=temp->next;
                        }while(temp->next!=head);
                        temp->next=b1;
                        b1->next=head;
                        head=b1;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c1);
                }while(c1==1);
                
                printf("\nthe list is: ");
                temp=head;
                do
                {
                    printf("%d ", temp->info);
                    temp=temp->next;
                }while(temp!=head);
                break;
                
        case 2: //inserting at end
                do
                {   
                    
                    struct node*b2;
                    b2=(struct node*)malloc(sizeof(struct node));
                    if(b2==NULL)
                    {   printf("memory is not allocated.");
                        
                    }
                    else
                    {
                        printf("enter value: ");
                        scanf("%d", &y);
                        b2->info=y;
                        b2->next=NULL;
                        temp=head;
                        do
                        {
                            temp=temp->next;
                        }while(temp->next!=head);
                        b2->next=head;
                        temp->next=b2;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c2);
                }while(c2==1);
                
                printf("the list is: ");
                temp=head;
                do
                {
                    printf("%d ", temp->info);
                    temp=temp->next;
                }while(temp!=head);
                break;
                
        case 3: //making list
                do
                {   
                    
                    struct node*b2;
                    b2=(struct node*)malloc(sizeof(struct node));
                    if(b2==NULL)
                    {   printf("memory is not allocated.");
                        
                    }
                    else
                    {
                        printf("enter value: ");
                        scanf("%d", &y);
                        b2->info=y;
                        b2->next=NULL;
                        temp=head;
                        do
                        {
                            temp=temp->next;
                        }while(temp->next!=head);
                        b2->next=head;
                        temp->next=b2;
                        count++;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c2);
                }while(c2==1);
                
                //inserting at given position
                printf("\nenter the position: ");
                scanf("%d", &p);
                if(p>count)
                    printf("\tinvalid position");
                else
                {
                    struct node*b3;
                    b3=(struct node*)malloc(sizeof(struct node));
                    if(b3==NULL)
                    {   printf("memory is not allocated.");
                        
                    }
                    else
                    {
                        printf("enter value: ");
                        scanf("%d", &z);
                        b3->info=z;
                        temp=head;
                        for(int i=0;i<p-1;i++)
                        {
                            prev=temp;
                            temp=temp->next;
                        }
                        b3->next=temp;
                        prev->next=b3;
                    }
                 
                    printf("the list is: ");
                    temp=head;
                    do
                    {
                        printf("%d ", temp->info);
                        temp=temp->next;
                    }while(temp!=head);
                }
                break;
                
        case 4: break;
                
        default: printf("\ninvalid entry");
                break;
    }
    
    return 0;
}