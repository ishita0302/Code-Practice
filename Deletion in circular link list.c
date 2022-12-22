#include <stdio.h>
#include <stdlib.h>

struct node
{   int info;
    struct node*next;
};

int main()
{
    int ch,n1,c1,x,p,count=1;
    struct node *head,*temp,*prev,*nw;
    
    //making list
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
    do
    {   
                    
        struct node*b1;
        b1=(struct node*)malloc(sizeof(struct node));
        if(b1==NULL)
        {   printf("memory is not allocated.");
                        
        }
        else
        {
            printf("enter next value: ");
            scanf("%d", &x);
            b1->info=x;
            b1->next=NULL;
            temp=head;
            do
            {
                temp=temp->next;
            }while(temp->next!=head);
            b1->next=head;
            temp->next=b1;
            count++;
        }
        printf("\nPress 1 for inserting more and 0 to stop.");
        scanf("%d", &c1);
    }while(c1==1);
    printf("the list is: ");
    temp=head;
    do
    {
        printf("%d ", temp->info);
        temp=temp->next;
    }while(temp!=head);
    printf("\n1. delete an element from begining.\n2. delete an element from end.\n3. delete an element from given position.\n4. exit. ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1: //delete from begining
                temp=head;
                prev=head;
                head=temp->next;
                do
                {
                    temp=temp->next;
                }while(temp->next!=prev);
                temp->next=head;
                prev->next=NULL;
                free(prev);
                printf("\nthe list is: ");
                temp=head;
                do
                {
                    printf("%d ", temp->info);
                    temp=temp->next;
                }while(temp!=head);
                break;
                
        case 2: //delete from end
                temp=head;
                while(temp->next!=head)
                {
                    prev=temp;
                    temp=temp->next;
                }
                prev->next=head;
                temp->next=NULL;
                free(temp);
                printf("the list is: ");
                temp=head;
                do
                {
                    printf("%d ", temp->info);
                    temp=temp->next;
                }while(temp!=head);
                break;
                
        case 3: //delete from given position
                printf("\nenter the position: ");
                scanf("%d", &p);
                if(p>count)
                    printf("\ninvalid position");
                else
                {
                    temp=head;
                    for(int i=0;i<p-1;i++)
                    {
                        prev=temp;
                        temp=temp->next;
                    }
                    prev->next=temp->next;
                    temp->next=NULL;
                    free(temp);
                }
                printf("\nthe list is: ");
                temp=head;
                do
                {
                    printf("%d ", temp->info);
                    temp=temp->next;
                }while(temp!=head);
                break;
                
        case 4: break;
        
        default: printf("\ninvalid entry.");
                break;
    }
    
    return 0;
}