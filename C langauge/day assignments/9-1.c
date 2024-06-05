#include<stdio.h>
int main()
{   int num,real;
    printf("Enter the number:");
    scanf("%d",&num);
    real=num;
    int sum=0,rev=0, arm_no=0;
    while(num!=0)
    { 
      sum =sum+ num%10;
      rev =rev*10+(num%10) ;
      arm_no= arm_no +(num%10)*(num%10)*(num%10) ;
      num=num/10;
    }
    printf("sum=%d\n",sum);
     printf("rev=%d\n",rev);
    if(real==rev)
    printf("number is palindrome\n");
    else
    printf("no is not palindrome\n");
    if(real==arm_no)
    printf("number is Armstrong number\n");
    else
    printf("no is not armstrong number\n");


}