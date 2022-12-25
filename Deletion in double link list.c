#include <stdio.h>
#include <stdlib.h>

struct node
{   int info;
    struct node*next;
    struct node*prev;
};

int main()
{
    int ch,n1,c1,x,p,count=0;
    struct node *head,*temp,*extra,*nw;
    
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
        nw->prev=NULL;
        head=nw;
    }
    
    //making list
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
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
                temp->next=b1;
                b1->prev=temp;
        }
        printf("\nPress 1 for inserting more and 0 to stop.");
        scanf("%d", &c1);
    }while(c1==1);
    printf("the list is: ");
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        printf("%d ", temp->info);
        count++;
    }
    
    printf("\n1. delete an element from begining.\n2. delete an element from end.\n3. delete an element from given position.\n4. exit. ");
    scanf("%d", &ch);
    
    switch(ch)
    {
        case 1: //delete from begining
                temp=head;
                extra=temp->next;
                head=temp->next;
                extra->prev=NULL;
                temp->next=NULL;
                free(temp);
                printf("the list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                }
                break;
                
        case 2: //delete from end
                temp=head;
                while(temp->next!=NULL)
                {
                    extra=temp;
                    temp=temp->next;
                }
                extra->next=NULL;
                temp->prev=NULL;
                free(temp);
                printf("the list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                }
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
                        extra=temp;
                        temp=temp->next;
                    }
                    extra->next=temp->next;
                    extra=temp->next;
                    extra->prev=temp->prev;
                    temp->next=NULL;
                    temp->prev=NULL;
                    free(temp);
                }
                printf("\nthe list is: ");
                for(temp=head;temp!=NULL;temp=temp->next)
                {
                    printf("%d ", temp->info);
                }
                break;
                
        case 4: break;
        
        default: printf("\ninvalid entry.");
                break;
    }

    return 0;
}