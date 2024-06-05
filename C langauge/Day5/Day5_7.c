#include<stdio.h> 
//scanf --> input int char and double 
int main()
{
     int roll;
     float percentage; 
     char grade; 
     printf("Enter the rollno");
     scanf("%d%*c",&roll); // --> int 
     printf("Enter the grade"); 
     scanf("%c",&grade); // --> char 
     printf("Enter the percentage ");
     scanf("%f",&percentage);   // --> float  

    printf("roll = %d, percentage = %.2f , grade = %c\n",roll,percentage,grade); 



    return 0;
}
