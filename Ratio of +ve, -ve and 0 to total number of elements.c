//Hackerrank problem 1

#include<stdio.h>
int main()
{
    int arr[100],i;
    float n=6, z=0, p=0, ne=0;
    scanf("%f", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
             z++;
        else if(arr[i]>0)
             p++;
        else
             ne++;
    }
    float s1=z/n;
    float s2=p/n;
    float s3=ne/n;
    printf("%f \n", s2);
    printf("%f \n", s3);
    printf("%f \n", s1);
    
    return 0;
}