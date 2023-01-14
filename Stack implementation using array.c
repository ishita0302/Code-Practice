#include <stdio.h> 

int stack[100],i,j,ch=0,n,top=-1;  
void push();  
void pop();  
void show(); 

int main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
    while(ch!= 4)  
    {  
        printf("Chose one: ");
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");  
        printf("\n Enter your choice \n");        
        scanf("%d",&ch);  
        switch(ch)  
        {  
            case 1:  push();  
                    break;  
            
            case 2:  pop();  
                    break;  
            
            case 3:  show();  
                    break;  
            
            case 4:   
                    break;   
         
            default:  printf("\ninvalid "); 
                    break;
        };  
    }  
}   

//pushing element
void push ()  
{  
    int s;      
    if (top == n)   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value: ");  
        scanf("%d",&s);         
        top = top +1;   
        stack[top] = s;   
    }   
}   

//pop element
void pop ()   
{   
    if(top == -1)   
        printf("Underflow");  
    else  
        top = top -1;   
}   

//print element
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  