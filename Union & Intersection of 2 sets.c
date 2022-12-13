#include <stdio.h>

int main()
{
    int a[10],b[10],c[20],n1,n2,i,j,f=0;
    
    printf("enter no. of elements in A: ");
    scanf("%d", &n1);
    printf("\n enter no. of elements in B: ");
    scanf("%d", &n2);
    
    printf("\n enter elements of A: ");
    for(i=0;i<n1;i++)
    {   scanf("%d", &a[i]);}
    printf("\n enter elements of B: ");
    for(i=0;i<n2;i++)
    {   scanf("%d", &b[i]);}
    
    printf("set A: ");
    for(i=0;i<n1;i++)
    {   printf("%d \t", a[i]);}
    printf("\n set B: ");
    for(i=0;i<n2;i++)
    {   printf("%d \t", b[i]);}
    
    //intersection
    printf("intersection is: ");
    for(i=0;i<n1;i++)
    {   for(j=0;j<n2;j++)
        {   if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    
    //union
    printf("union is: ");
    for(i=0;i<n1;i++)
    {   printf("%d ", a[i]);}
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(b[i]==a[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%d ", b[i]);
        f=0;
    }
    
    return 0;
}