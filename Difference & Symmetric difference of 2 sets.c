#include <stdio.h>

int main()
{
    int a[10],b[10],c[20],d[20],e[20],n1,n2,i,j,f=0,k=0,l=0,m=0;
    
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
            {   c[k]=a[i];
                k++;
                printf("%d ",a[i]);
                break;
            }
        }
    }
  
    //A-B
    printf("\n A-B is: ");
    for(i=0;i<n1;i++)
    {   for(j=0;j<k;j++)
        {   if(a[i]==c[j])
            {   f=1;
                break;
            }
        }
        if(f==0)
        {   d[l]=a[i];
            l++;
            printf("%d ", a[i]);
        }
        f=0;
    }
    
    //B-A
    printf("\n B-A is: ");
    for(i=0;i<n2;i++)
    {   for(j=0;j<k;j++)
        {   if(b[i]==c[j])
            {   f=1;
                break;
            }
        }
        if(f==0)
        {   e[m]=b[i];
            m++;
            printf("%d ", b[i]);
        }
        f=0;
    }
    
    //Symmetric difference
    printf("\n Symmetric difference is: ");
    for(i=0;i<l;i++)
    {   printf("%d ", d[i]);}
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(e[i]==d[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
            printf("%d ", e[i]);
        f=0;
    }
    
    return 0;
}