#include<stdio.h>
int main()
{
    int n1=1,n2=1,number;
    printf("Enter the no of elelments you wanna print of fibbonacci series:");
    scanf("%d",&number);
    printf("%4d%4d",n1,n2);
    int i=3;
    while(i<=number)
    {
        int n3=n1+n2;
        printf("%4d",n3);
        n1=n2;
        n2=n3;
        i++;
    }
} 