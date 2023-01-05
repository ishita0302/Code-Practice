#include <stdio.h>

//function definition/declaration
void hanoi(int n,char s,char d,char a);

int main()
{
    int x,r;
    printf("enter no. of disk you want: ");
    scanf("%d", &x);
    //function calling
    hanoi(x,'S','D','A');
    return 0;
}

//function called
void hanoi(int n,char s,char d,char a)
{
    if(n==1)
    {    printf("\ndisk 1 from S to D");
         return;
    }
    hanoi(n-1,s,a,d);
    printf("\ndisk %d from S to A", n);
    hanoi(n-1,a,d,s);
}