#include<stdio.h>
#include<math.h>
 
void power(char *set, int size);

int main()
{
    char set[] = {'a','b','c'};
    //function called
    power(set, 3);
    return 0;
}

//function
void power(char *set, int size)
{
    unsigned int n = pow(2, size);
    int i,j;
    for(i = 0; i < n; i++)
    {
      for(j = 0; j < size; j++)
       {
            if(i & (1<<j))
                printf("%c", set[j]);
       }
       printf("\n");
    }
}