#include <stdio.h>
#include <math.h>

int main()
{
    int d,s,p,q1,r1,q2,r2,q3,b=0,z=0,x=0,o=0,y=0,h;
   // char r3,h='\0';
    printf("enter decimal number: ");
    scanf("%d", &d);
    s=d;
    p=d;
    
    //decimal to binary
    while(d!=0)
    {
        q1=d/2;
        r1=d%2;
        if(z==0)
            b=b + r1;
        else
            b=b + (r1 * (pow(10,z)));
        d=q1;
        z++;
    }
    printf("\nIts binary is: %d", b);
    
    //decimal to octal
    while(s!=0)
    {
        q2=s/8;
        r2=s%8;
        if(x==0)
            o=o + r2;
        else
            o=o + (r2 * (pow(10,x)));
        s=q2;
        x++;
    }
    printf("\nIts octal is: %d", o);
    
    printf("\nIts hexadecimal is: %x", p);
    
    return 0;
}