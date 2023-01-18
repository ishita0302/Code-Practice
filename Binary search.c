#include <stdio.h>

int bs(int arr[], int l, int h, int x);

int main()
{
    int a[100],n,s,mid,i,res;
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
    res=bs(a,0,n-1,s);
    if(res==-1)
        printf("\nelement not found");
    else
        printf("\nelement found at %d", res);
    
    return 0;
}

//binary search
int bs(int arr[], int l, int h, int x)
{
    if (h >= l) 
    {
        int mid = l + (h - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return bs(arr, l, mid - 1, x);
        else
            return bs(arr, mid + 1, h, x);
    }
    return -1;
}