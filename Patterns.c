#include <stdio.h>

int main()
{
    int i,j,k;
    
    //pattern 1
    printf("pattern 1:\n");
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    //pattern 2
    printf("pattern 2:\n");
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    //pattern 3
    printf("pattern 3:\n");
    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    
    //pattern 4
    printf("pattern 4:\n");
    for(i=4;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    //pattern 5
    printf("pattern 5:\n");
    for(i=0;i<=4;i++)
    {
        for(j=1;j>=3;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i;k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    //pattern 6
    printf("pattern 6:\n");
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i;k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    
    //pattern 7
    printf("pattern 7:\n");
    for(i=0;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i-1;k++) 
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    //pattern 8
    printf("pattern 8:\n");
    for(i=0;i<=4;i++)
    {
        for(j=1;j>=3;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i-1;k++) 
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
    //pattern 9
    printf("pattern 9:\n");
    for(i=0;i<4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i;k++) 
        {
            printf("%d", k+1);
        }
        printf("\n");
    }
    
    //pattern 10
    printf("pattern 10:\n");
    for(i=0;i<4;i++)
    {
        for(j=1;j>=3;j++)
        {
            printf(" ");
        }
        for (k=0;k<=i;k++) 
        {
            printf("%d", k+1);
        }
        printf("\n");
    }
    
    //pattern 11
    printf("pattern 11:\n");
    for (i=0; i<4; i++) 
    {
        for (j=0; j<i; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*(4-i)-1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    
    //pattern 12
    printf("pattern 12:\n");
    for (i=0; i<5; i++) 
    {
        for (j=0; j<5-i-1; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*i-1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }
    
    //pattern 13
    printf("pattern 13:\n");
    for (i=0; i<4; i++) 
    {
        for (j=0; j<i; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*(4-i)-1; k++) 
        {
            printf("%d",i+1 );
        }
        printf("\n");
    }
    
    //pattern 14
    printf("pattern 14:\n");
    for (i=0; i<5; i++) 
    {
        for (j=0; j<5-i-1; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*i-1; k++) 
        {
            printf("%d",i );
        }
        printf("\n");
    }
    
    //pattern 15
    printf("pattern 15:\n");
    for (i=0; i<4; i++) 
    {
        for (j=0; j<i; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*(4-i)-1; k++) 
        {
            printf("%d",k+1 );
        }
        printf("\n");
    }
    
    //pattern 16
    printf("pattern 16:\n");
    for (i=0; i<5; i++) 
    {
        for (j=0; j<5-i-1; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*i-1; k++) 
        {
            printf("%d",j+1 );
        }
        printf("\n");
    }
    
    //pattern 17
    printf("pattern 17:\n");
    for (i=0; i<5; i++) 
    {
        for (j=0; j<5-i-1; j++) 
        {
            printf(" ");
        }
        for (k=0; k<2*i-1; k++) 
        {
            printf("%d",k+1 );
        }
        printf("\n");
    }
    
    return 0;
}