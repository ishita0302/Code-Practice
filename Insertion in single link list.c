#include <stdio.h>
#include <stdlib.h>

struct node
{   int info;
    struct node*next;
};

int main()
{
    int ch,n1,c1,c2,y,x,p,z,count=0;
    struct node *head,*temp,*nw;
    
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
        nw->next=NULL;
        head=nw;
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
                        b1->next=head;
                        head=b1;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c1);
                }while(c1==1);
                printf("\nthe list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                }
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
                        while(temp->next!=NULL)
                        {
                            temp=temp->next;
                        }
                        temp->next=b2;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c2);
                }while(c2==1);
                
                printf("the list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                }
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
                        printf("enter value for making further list: ");
                        scanf("%d", &y);
                        b2->info=y;
                        b2->next=NULL;
                        temp=head;
                        while(temp->next!=NULL)
                        {
                            temp=temp->next;
                        }
                        temp->next=b2;
                    }
                    printf("\nPress 1 for inserting more and 0 to stop.");
                    scanf("%d", &c2);
                }while(c2==1);
                printf("the list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                    count++;
                }
                
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
                        for(int i=1;i<p-1;i++)
                        {
                            temp=temp->next;
                        }
                        b3->next=temp->next;
                        temp->next=b3;
                    }
                    
                    printf("the list is: ");
                    for(temp=head;temp!=NULL;temp=temp->next)
                    {
                        printf("%d ", temp->info);
                    }
                }
                break;
                
        case 4: break;
                
        default: printf("\ninvalid entry");
                break;
    }
    
    return 0;
}