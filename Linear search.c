#include <stdio.h>

int main()
{
    int a[100],n,s,i,c=0;
    printf("enter no. of elements in A: ");
    scanf("%d", &n);
    printf("\n enter elements in increasing order of A: ");
    for(i=0;i<n;i++)
    {   scanf("%d", &a[i]);}
    printf("set A: ");
    for(i=0;i<n;i++)
    {   printf("%d \t", a[i]);}
    printf("\nenter number to search: ");
    scanf("%d", &s);
    
    //linear search
    for (i= 0; i<n; i++)
    {
        if (a[i] == s)
        {
            printf("\nelement found at %d", i);
            c=1;
            break;
        }
    }
    if(c==0)
        printf("\nelement not found");
    
    return 0;
}