#include<stdio.h>
int fibbonacci(int n);
int main()
{
    int n;
    printf("Enter the number which you wanna print of fibbonacci series:");
    scanf("%d",&n);
    int num=fibbonacci(n);
    printf("%d th term of fibbonacci series is :%d",n,num);
    return 0;
}
int fibbonacci(int n)
{   if(n==1)
    return 0;
    if(n==2)
    return 1;
    int ans= fibbonacci(n-1)+fibbonacci(n-2);
    return ans;
}