#include<stdio.h>
#include<string.h>
int main()
{
    int h,m,s,f=0;
    char a[100];
    scanf("%d%d%d%s", &h,&m,&s,&a[100]);
    if(strcmp(a,"AM")==0)
        f=1;
    else
    {
        switch(h)
        {
            case 1: h=13;
                    break;
            case 2: h=14;
                    break;
            case 3: h=15;
                    break;
            case 4: h=16;
                    break;
            case 5: h=17;
                    break;
            case 6: h=18;
                    break;
            case 7: h=19;
                    break;
            case 8: h=20;
                    break;
            case 9: h=21;
                    break;
            case 10:h=22;
                    break;
            case 11:h=23;
                    break;
            case 12:h=00;
                    break;
            default: break;
        }
    }
    printf("%d:%d:%d",h,m,s);
    return 0;
}