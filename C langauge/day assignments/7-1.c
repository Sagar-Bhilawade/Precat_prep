#include<stdio.h>

int main()
{
    int num1,num2;
    printf("enter the five digit number:");
    scanf("%d",&num1);
    num2=num1;
    if(9999<num1<99999)
    {  int num=0;
        while(num1>0)
       {
          
           num=num*10+num1%10;
           num1=num1/10;

       }
       printf("%d\n",num);
       if(num2==num)
       {
           printf("number is palindrome");
       }
       else
       {
           printf("number is not palindrome");
       }
       
    }
}