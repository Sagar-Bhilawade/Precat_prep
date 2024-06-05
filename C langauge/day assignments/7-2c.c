#include<stdio.h>
int main()
{   int y,days;
    printf("Enter the year:");
    scanf("%d",&y);
    days= (y%4==0)?((y%100!=0)?366:(y%400==0)?366:365):365 ;
    printf("days in year are :%d",days);
    return 0;


}