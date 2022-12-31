#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100],n,s,a,b,c=0,d=0,e=0;
    printf("How many numbers you want to enter: ");
    scanf("%d", &n);
    printf("\nenter numbers in increasing order: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //finding range
    if((arr[0]<0)&&(arr[n-1]<0))
    {
        a=abs(arr[0]);
        b=abs(arr[n-1]);
        s=b - a;
    }
    else if((arr[0]<0)&&(arr[n-1]>0))
    {
        a=abs(arr[0]);
        s=a + arr[n-1];
    }
    else
    {
        s=arr[n-1] - arr[0];
    }
    printf("range is: %d", s);
    
    //finding +ve/-ve/0 's
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            c++;
        else if(arr[i]>0)
            d++;
        else
            e++;
    }
    printf("\nNo. of 0's: %d", c);
    printf("\nNo. of +ve's: %d", d);
    printf("\nNo. of -ve's: %d", e);
    
    return 0;
}