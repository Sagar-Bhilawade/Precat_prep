#include<stdio.h>
int main()
{   int y,days;
    enum month
    {
        jan=1,feb,march,april,may,june,july,august,september,octomber,november,december
    };
    enum month m;
    printf("Enter the year & month:");
    scanf("%d%d",&y,&m);
    days= (y%4==0)?((y%100!=0)?366:(y%400==0)?366:365):365 ;
    printf("days in year are :%d",days);
    switch (m)
    {
    case jan:
        printf("days in the month are:31");
        break;
    case feb:
      {  if(days==366)
          printf("days in the month are:29");
         else
           printf("days in the month are:28"); 

           break;
      }
       case march:
        printf("days in the month are:31");
        break;
         case april:
        printf("days in the month are:30");
        break;
         case may:
        printf("days in the month are:31");
        break;
         case june:
        printf("days in the month are:30");
        break;
         case july:
        printf("days in the month are:31");
        break;
         case august:
        printf("days in the month are:31");
        break;
         case september:
        printf("days in the month are:30");
        break;
         case octomber:
        printf("days in the month are:31");
        break;
         case november:
        printf("days in the month are:30");
        break;
         case december:
        printf("days in the month are:31");
        break;

    
    default:
        printf("invalid month");
        break;
    }
    
    return 0;


}