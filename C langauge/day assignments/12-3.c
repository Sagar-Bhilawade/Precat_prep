#include<stdio.h>
int gcd(int num1,int num2);
int main()
{
    int num1,num2;
    printf("Enter the numbers whose gcd you wanna print:");
    scanf("%d%d",&num1,&num2);
    int hcf = gcd(num1,num2);
    printf("The gcd of numbers %d & %d is:%d",num1,num2,hcf);
    return 0;
}
int gcd(int num1,int num2)
{ if (num2 != 0)
        return gcd(num2, num1 % num2);
    else
        return num1;
    
}