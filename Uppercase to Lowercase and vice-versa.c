#include <stdio.h>
#include <string.h>

int main() 
{
   char s[100];
   int i=0,j;
   printf("\nEnter a string : ");
   gets(s);
   while(s[i]!='\0')
   {    if(s[i] >= 'a' && s[i] <= 'z')
        {   s[i]=s[i] - 32;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z')
        {   s[i]=s[i] + 32;
        }
        else
            printf(" ");
        i++;
   }
   printf("\nString in Alternate Case = %s", s);
   return 0;
}