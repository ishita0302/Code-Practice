#include <stdio.h>
#include <math.h>

int main()
{
    int b,c,s,d=0,z=0;
    printf("enter binary number: ");
    scanf("%d", &b);
    while(b!=0)
    {
        s=b%10;
        d=d + (s * (pow(2,z)));
        b=b/10;
        z++;
    }
    printf("\nIts decimal is: %d", d);

    return 0;
}