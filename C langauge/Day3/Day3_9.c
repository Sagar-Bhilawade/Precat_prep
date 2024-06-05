#include<stdio.h> 

int main()
{
    int number; // variable declaration 
    int roll = 424; // var decln + init

    double basic_salary = 2000.00,total_salary=1000.00;
    // multiple var decln in single line         

    /*      
        double basic_salary= 2000.00; 
        double total_salary= 1000.00;  
    */

     char ch = 'A'; // var decln + init 

     printf("Variables and datatypes \n"); 

     number = 12; //assignment

     printf("number ----> %d\n",number);// 12

     number = 17; // assignment
     // overwrite with old value i.e 12          

     printf("roll = %d\n",roll); //424      

     printf("number ----> %d\n",number);// 17
        
     printf("%lf %lf\n",basic_salary,total_salary);

     // roll number basic_salary
     //  %d   %d     %lf 

      printf("%d %d %lf\n",roll,number,basic_salary);   

       // 'A' --> ch --> %c

       printf("char = %c",ch);   


    return 0; 
}