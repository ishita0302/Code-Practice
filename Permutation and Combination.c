#include <stdio.h>

int fact(int m);

int main()
{
    int n,r,s;
    float a1,a2,a3,a4;
    printf("enter 1 for permutation and 2 for combination");
    scanf("%d", &s);
    printf("\nenter n: ");
    scanf("%d", &n);
    printf("\nenter r: ");
    scanf("%d", &r);
    switch(s)
    {
        case 1: a1=fact(n);
                a2=fact(n-r);
                a3=a1/a2;
                printf("\npermutation is: %f", a3);
                break;
                
        case 2: a1=fact(n);
                a2=fact(r);
                a3=fact(n-r);
                a4=a1 / (a2*a3);
                printf("\ncombination is: %f", a4);
                break;
                
        default: printf("\ninvalid entry");
                break;
    }

    return 0;
}

int fact(int m)
{
    if((m==0)||(m==1))
        return 1;
    else
        return m * fact(m-1);
    
}