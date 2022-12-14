#include <stdio.h>

int main()
{
    int i,j,k;
    
    //Not table
    printf("NOT table: ");
    for(i=0;i<2;i++)
    {   if(i==0)
        {   printf("\n%d \t %d", i, 1);}
        else
            printf("\n%d \t %d", i, 0);
    }
    
    //AND table
    printf("\n AND table: ");
    for(i=0;i<2;i++)
    {   for(j=0;j<2;j++)
        {   if((i==1) && (j==1))
                printf("\n%d \t %d \t %d", i, j, 1);
            else
                printf("\n%d \t %d \t %d", i, j, 0);
        }
    }
    
    //OR table
    printf("\n OR table: ");
    for(i=0;i<2;i++)
    {   for(j=0;j<2;j++)
        {   if((i==0) && (j==0))
                printf("\n%d \t %d \t %d", i, j, 0);
            else
                printf("\n%d \t %d \t %d", i, j, 1);
        }
    }
    
    return 0;
}