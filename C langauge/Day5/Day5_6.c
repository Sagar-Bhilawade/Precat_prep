#include<stdio.h> 
//scanf --> input int char and double 
int main()
{
     int roll;
     float percentage; 
     char grade; 
     printf("Enter the grade"); 
     scanf("%c",&grade); 
     printf("Enter the rollno");
     scanf("%d",&roll); 
     printf("Enter the percentage ");
     scanf("%f",&percentage);   

    printf("roll = %d, percentage = %.2f , grade = %c\n",roll,percentage,grade); 



    return 0;
}

