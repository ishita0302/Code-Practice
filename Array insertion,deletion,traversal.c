#include <stdio.h>

int main()
{   
    int a[10],n,i,s,c=0;
    
    printf("enter no. of elements in A: ");
    scanf("%d", &n);
    
    //insertion
    printf("\n enter elements of A: ");
    for(i=0;i<n;i++)
    {   scanf("%d", &a[i]);}
    
    //traversal
    printf("\nA = ");
    for(i=0;i<n;i++)
    {   printf("%d ", a[i]);}
    
    //deletion
    printf("\nenter element to be deleted: ");
    scanf("%d", &s);
    for(i=0;i<n;i++)
    {   
        if(a[i]==s)
        {   c=i; 
            printf("\nit is %dth index", i);
        }
    }
    for(i=c;i<n;i++)
    {   a[i]=a[i+1];
    }
    n--;
    printf("\nnew array: ");
    for(i=0;i<n;i++)
    {   printf("%d ", a[i]);}
    
    return 0;
}