#include <stdio.h>

int main()
{
    int a[10],b[10],c[20],n1,n2,i,j;
    
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
    
    printf("\n set A: ");
    for(i=0;i<n1;i++)
    {   printf("%d \t", a[i]);}
    printf("\n set B: ");
    for(i=0;i<n2;i++)
    {   printf("%d \t", b[i]);}
    
    printf("\n elements in A x B: %d", n1*n2);
    
    //Cartesian product
    printf("\n A x B is: ");
    for(i=0;i<n1;i++)
    {   for(j=0;j<n2;j++)
        {   printf("(%d , %d) ", a[i],b[j]);
        }
    }

    return 0;
}