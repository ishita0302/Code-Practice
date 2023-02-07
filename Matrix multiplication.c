#include <stdio.h>

int main()
{
    int a[100][100],b[100][100],c[100][100],r1,r2,c1,c2,i,j,k;
    
    //first array
    printf("enter no. of rows in A: ");
    scanf("%d", &r1);
    printf("\n enter no. of columns in A: ");
    scanf("%d", &c1);
    printf("\n enter elements of A: ");
    for(i=0;i<r1;i++)
    {   
        for(j=0;j<c1;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nA:\n");
    for(i=0;i<r1;i++)
    {   
        for(j=0;j<c1;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("  \n");
    }
    
    //second array
    printf("enter no. of rows in B: ");
    scanf("%d", &r2);
    printf("\n enter no. of columns in B: ");
    scanf("%d", &c2);
    
    printf("\nenter elements of B: ");
    for(i=0;i<r2;i++)
    {   
        for(j=0;j<c2;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("\nB:\n");
    for(i=0;i<r2;i++)
    {   
        for(j=0;j<c2;j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("  \n");
    }
    
    //matrix multiplication
    if(c1==r2)
    {   for(i=0;i<r1;i++)
        {   
            for(j=0;j<c2;j++)
            {   c[i][j]=0;
                for(k=0;k<c1;k++)
                {   c[i][j]+=a[i][k]*b[k][j];}
            }
        }
        printf("\nAxB:\n");
        for(i=0;i<r1;i++)
        {   
            for(j=0;j<c2;j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("  \n");
        }
    }
    else
        printf("not possible.");
        
    
    return 0;
}