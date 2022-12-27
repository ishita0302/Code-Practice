#include <stdio.h>

int main()
{
    int date, month, year,x,y,m,d,nl,f,s1,s2,s3,s4,q,z,c=0,n=0;
    printf("enter date/month/year for knowing the day: ");
    scanf("%d %d %d", &date, &month, &year);
    
    //checking leap year
    y=year;
    while(y!=2001)
    {
        if(y>2001)
        {
            if(((y%4==0)&&(y%100!=0))||(y%400==0))
            {    c++;
                 y--;
            }
            else
            {    
                 y--;
            }
            
        }
        else
        {
            if(((y%4==0)&&(y%100!=0))||(y%400==0))
            {    c++;
                 y++;
            }
            else
            {  
                 y++;
            }
        }
        n++;
    }
    
    //checking month
    if(year>2001)
    {
        s1=12 * (n);
        m=s1 + month;
    }
    else if(year<2001)
    {   
        s1=12 * n;
        z=12 - month;
        m=s1 + z;
    }
    else
        m=month;
    
    //checking days
    f=2 * c;
    nl=n - c;
    s2=nl * 3;
    if(year>=2001)
    {   if(month>=2)
        {
            if(((month==2)&&(date==28))||(month<2))
            {
                s2=s2 + 3;
            }
            else
                s2=s2 + 0;
        }
    }
    else
    {
        if(month<=2)
        {
            if(((month==2)&&(date==28))||(month>2))
            {
                s2=s2 + 3;
            }
            else
                s2=s2 + 0;
        }
    }
    
    s3=n * 4;
    if(year>=2001)
    {   if(month==5)
            q=1;
        else if((month>5)&&(month<=7))
        {   if(month==7)
                q=2;
            else
                q=1;
        }
        else if((month>7)&&(month<=10))
        {   if(month==10)
                q=3;
            else
                q=2;
        }
        else if((month>10)&&(month<=12))
        {   if(month==12)
                q=4;
            else
                q=3;
        }
        else
            q=0;
    }
    else
    {   if(month==10)
            q=1;
        else if((month<10)&&(month>=8))
        {   if(month==8)
                q=2;
            else
                q=1;
        }
        else if((month<8)&&(month>=5))
        {   if(month==5)
                q=3;
            else
                q=2;
        }
        else if((month<5)&&(month<=3))
        {   if(month==3)
                q=4;
            else
                q=3;
        }
        else
            q=0;
    }
    
    x=31 - date;
    
    if(year>=2001)
        d=(m * 31) - f - s2 - s3 - q - x;
    else
        d=(m * 31) - f - s2 - s3 - q - date;
    
    //calculating the exact day
    s4=d % 7;
    printf("\nday for %d / %d / %d is: ",date,month,year);
    if(s4==0)
        printf("Sunday");
    if(s4==1)
        printf("Monday");
    if(s4==2)
        printf("Tuesday");
    if(s4==3)
        printf("Wednesday");
    if(s4==4)
        printf("Thursday");
    if(s4==5)
        printf("Friday");
    if(s4==6)
        printf("Saturday");
    
    return 0;
}