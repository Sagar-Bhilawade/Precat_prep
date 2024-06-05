#include<stdio.h>
int main()
{
    int q;
    float discount=0 ,price=0;
    printf("enter the quantity:");
    scanf("%d",&q);
    if(q>=30&&q<=50)
   {
        discount= 0.1f*(5*q);
   }
    else if(q>50)
   {
        discount=0.15f*(5*q);
   }
    else
   {
        discount =0;
   }

    price= (5*q) -discount;
    printf("final price:%f",price);
}