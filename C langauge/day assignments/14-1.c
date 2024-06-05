#include<stdio.h>
void Swap(int *a,int *b);
int main()
{
    int a,b;
    printf("Enter two numbers which you wanna swap:");
    scanf("%d%d",&a,&b);
    printf("Before Swap\na=%d b=%d\n",a,b);
    Swap(&a,&b);
    printf("Aftre Swap\na=%d b=%d",a,b);
    return 0;
}
void Swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}