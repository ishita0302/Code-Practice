#include <stdio.h>
#include <math.h>

int main()
{
    int o,d=0,s,z=0;
    printf("enter octal number: ");
    scanf("%d", &o);
    while(o!=0)
    {
        s=o%10;
        d=d + (s * (pow(8,z)));
        o=o/10;
        z++;
    }
    printf("\nIts decimal is: %d", d);
    
    return 0;
}