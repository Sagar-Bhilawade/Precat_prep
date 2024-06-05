#include<stdio.h>
int main()
{
    int num,sum=0;
    printf("enter the three digit number:");
    scanf("%d",&num);
   if(num<1000)
   { while(num!=0)
    {
        sum=sum+num%10 ;
        num=num/10;
    }
    printf("sum=%d",sum);
   }
   else
   {
       printf("not a three digit number");
   }
   


}