#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,e,d,p,c=0,s=0,r1=0,r2=0,f=0;
    printf("enter a number: ");
    scanf("%d", &n);
    
    //palindrome
    m=n;
    while(n>0)
    {
        e=n%10;
        r1=(r1 * 10) + e;
        n=n / 10;
    }
    if(r1==m)
        printf("\nNumber is palindrome.");
    else
        printf("\nNumber is not palindrome.");
    
    //armstrong
    p=m;
    while(m>0)
    {
        e=m%10;
        r2=(r2 * 10) + e;
        m=m / 10;
        c++;
    }
    while(r2>0)
    {
        d=r2%10;
        s=s + pow(d,c);
        r2=r2/10;
    }
    if(s==p)
        printf("\nNumber is armstrong.");
    else
        printf("\nNumber is not armstrong.");
    
    //prime number
    if((p==0)||(p==1))
        f=1;
    for(int i=2;i<=p/2;i++)
    {   
        if(p%i==0)
            f=1;
    }
    if(f==1)
        printf("\nNumber is not a prime no.");
    else
        printf("\nNumber is a prime no.");

    return 0;
}