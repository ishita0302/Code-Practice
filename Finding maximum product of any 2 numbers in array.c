#include <stdio.h>

int main()
{
    int a[100],n,i,j,c,s,x,y;
    printf("enter no. of elements in A: ");
    scanf("%d", &n);
    printf("\n enter elements in increasing order of A: ");
    for(i=0;i<n;i++)
    {   scanf("%d", &a[i]);}
    printf("set A: ");
    for(i=0;i<n;i++)
    {   printf("%d \t", a[i]);}
    
    c=a[0]*a[1];
    for(i=0;i<n;i++)
    {   for(j=i+1;j<n;j++)
        {
            s=a[i]*a[j];
            if(s>c)
                c=s; 
                x=a[i];
                y=a[j];
        }
    }
    printf("\nMaximum product is %d", c);
    printf("\nPairs are: (%d , %d)", x,y);
    return 0;
}