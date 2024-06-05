#include<stdio.h>
int main()
{   int num;
    printf("enter the 4 digit number");
    scanf("%d",&num);
    if(num<10000)
    {   int a=num/1000;
        int b=(num/100)%10;
        int c=(num/10)%10;
        int d=num%10;
        printf(" face values=%4d%4d%4d%4d\n",a,b,c,d);
        printf("%d=%d+%d+%d+%d\n",num,a*1000,b*100,c*10,d);
        printf("reversal number:");
        while(num!=0)
        {
            int n=num%10;
            printf("%d",n);
            num=num/10;
        }
        
    }
}