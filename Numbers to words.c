#include<string.h>
#include<stdio.h>
#define SIZE 20

char * words(long n, char *a);
char * numtowords(int n, char* b, char * c, int len);
//selecting strings
char* one[] = { "", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "
              };
              
char* ten[] = { "", "", "twenty ", "thirty ", "forty ",
                "fifty ", "sixty ", "seventy ", "eighty ",
                "ninety "
              };

int main()
{
    long num;
    char str[100] = "\0";
    printf("Enter any number: ");
    scanf("%ld", &num);
    
    //function calling
    printf( "%s",words(num,str));
    
    return 0;
}

// Function to print a given number in words
char * words(long n, char *a)
{
    char str[SIZE] = "\0";
    strcat(a, numtowords((n / 10000000), "crore ",str,SIZE));
    strcat(a, numtowords(((n / 100000) % 100), "lakh ",str,SIZE));
    strcat(a, numtowords(((n / 1000) % 100), "thousand ",str,SIZE));
    strcat(a, numtowords(((n / 100) % 10), "hundred ",str,SIZE));
    if (n > 100 && n % 100)
    {
        strcat(a, "and ");
    }
    strcat(a, numtowords((n % 100), "",str,SIZE));
    return a;
}

//second function
char * numtowords(int n, char* b, char * c, int len)
{
    memset(c,0,len);
    if (n > 19)
    {
        strcat(c,ten[n / 10]);
        strcat(c,one[n % 10]);
    }
    else
    {
        strcat(c,one[n]);
    }

    if (n)
    {
        strcat(c,b);
    }
    return c;
}