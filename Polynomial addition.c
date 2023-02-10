#include<stdio.h>
#include<stdlib.h>

struct node
{
    int num,expo;
    struct node*next;
};

int main()
{
    int x,y,c1,a=0,b=0,c;
    struct node *head1,*head2,*head3,*temp1,*temp2,*temp3,*n1,*n2,*n3,*p1,*p2;
    
    //first polynomial function
    //making first node
    printf("Enter values for first function.");
    n1=(struct node*)malloc(sizeof(struct node));
    if(n1==NULL)
    {   printf("memory is not allocated.");
    }
    else
    {
        printf("\nenter first number: ");
        scanf("%d", &x);
        printf("enter first power of exponent: ");
        scanf("%d", &y);
        n1->num=x;
        n1->expo=y;
        n1->next=NULL;
        head1=n1;
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
            printf("enter next power of exponent: ");
        scanf("%d", &y);
            b1->num=x;
            b1->expo=y;
            b1->next=NULL;
            temp1=head1;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            temp1->next=b1;
        }
        printf("\nPress 1 for inserting more and 0 to stop.");
        scanf("%d", &c1);
    }while(c1==1);
    printf("First function: ");
    for(temp1=head1;temp1!=NULL;temp1=temp1->next)
    {
        if(temp1->num>0)
            printf(" + ");
        printf("%dx^%d ", temp1->num,temp1->expo);
        a++;
    }
    
    
    //second polynomial function
    //making second node
    printf("\nEnter values for second function.");
    n2=(struct node*)malloc(sizeof(struct node));
    if(n2==NULL)
    {   printf("memory is not allocated.");
    }
    else
    {
        printf("\nenter first number: ");
        scanf("%d", &x);
        printf("enter first power of exponent: ");
        scanf("%d", &y);
        n2->num=x;
        n2->expo=y;
        n2->next=NULL;
        head2=n2;
    }
    //making list
    do
    {   
        struct node*b2;
        b2=(struct node*)malloc(sizeof(struct node));
        if(b2==NULL)
        {   printf("memory is not allocated.");
         
        }
        else
        {
            printf("enter next value: ");
            scanf("%d", &x);
            printf("enter next power of exponent: ");
        scanf("%d", &y);
            b2->num=x;
            b2->expo=y;
            b2->next=NULL;
            temp2=head2;
            while(temp2->next!=NULL)
            {
                temp2=temp2->next;
            }
            temp2->next=b2;
        }
        printf("\nPress 1 for inserting more and 0 to stop.");
        scanf("%d", &c1);
    }while(c1==1);
    printf("Second function: ");
    for(temp2=head2;temp2!=NULL;temp2=temp2->next)
    {
        if(temp2->num>0)
            printf(" + ");
        printf("%dx^%d ", temp2->num,temp2->expo);
        b++;
    }
    c=a+b;
    
    //addition
    n3=(struct node*)malloc(sizeof(struct node));
    if(n3==NULL)
    {   printf("memory is not allocated.");
    }
    else
    {   printf("\nafter addition: ");
        for(p1=head1,p2=head2,c=a+b;c!=0;)
        {
            if(p1->expo==p2->expo)
            {
                n3->num=p1->num + p2->num;
                n3->expo=p1->expo;
                c=c-2;
                if(p1->next!=NULL)
                    p1=p1->next;
                if(p2->next!=NULL)
                    p2=p2->next;
                
            }
            else if(p1->expo>p2->expo)
            {
                n3->num=p1->num;
                n3->expo=p1->expo;
                c--;
                if(p1->next!=NULL)
                    p1=p1->next;
            }
            else
            {
                n3->num=p2->num;
                n3->expo=p2->expo;
                c--;
                if(p2->next!=NULL)
                    p2=p2->next;
            }
            if(n3->num>0)
                printf(" + ");
            printf("%dx^%d ", n3->num,n3->expo);
        }
    }
    
    return 0;
}