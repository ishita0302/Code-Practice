//Hackerrank problem 2

#include<stdio.h>
int main()
{
    long arr[100],n=5,i,j,max=0,min=0,temp;
    for(i=0;i<n;i++)
    {   scanf("%ld", &arr[i]);}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    max=arr[1]+arr[2]+arr[3]+arr[4];
    min=arr[0]+arr[1]+arr[2]+arr[3];
    printf("%ld  %ld",min,max);
    return 0;
}