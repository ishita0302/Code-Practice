#include <stdio.h>

int main()
{
    int a[10], temp, i, j, n, c, s;
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("enter the elements of array: ");
    for(i=0;i<n;i++)
    {   scanf("%d", &a[i]);
    }
    printf("array is: ");
    for(i=0;i<n;i++)
    {   printf("%d", a[i]);
        printf("\t");
    }

    //bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nafter bubble sort array is: ");
    for(i=0;i<n;i++)
    {   printf("%d", a[i]);
        printf("\t");
    }
    
    //selection sort
    for(i=0;i<n;i++)
    {
        c=i;
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
                c=j;
            if(c!=i)
            {
                temp=a[c];
                a[c]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\nafter selection sort array is: ");
    for(i=0;i<n;i++)
    {   printf("%d", a[i]);
        printf("\t");
    }
    
    //insertion sort
    for(i=1;i<n;i++)
    {
        s=a[i];
        j=i - 1;
        while((j>=0)&&(a[j]>s))
        {
            a[j + 1]=a[j];
            j=j - 1;
        }
        a[j + 1]=s;
    }
    printf("\nafter insertion sort array is: ");
    for(i=0;i<n;i++)
    {   printf("%d", a[i]);
        printf("\t");
    }
    
    return 0;
}