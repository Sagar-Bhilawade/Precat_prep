#include<stdio.h>
int main()
{   int y;
    printf("Enter the year:");
    scanf("%d",&y);
    if(y%4==0&& y%100!=0)
    {
    printf("days in year are:366");
    }
    else if(y%400==0)
    {
         printf("days in year are:366");
    }

    else
    {
        printf("days in year are:365");
    }
    

}