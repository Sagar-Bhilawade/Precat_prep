#include<stdio.h>
#include<math.h>
int main()
{   int a,b,c;
    float peri,area,s;
    printf("enter three sides of the triangle ");
    scanf("%d%d%d",&a,&b,&c);
    s=(a+b+c) /2;
    peri= 2*s;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("peri=%f\n area =%f",peri,area);
}