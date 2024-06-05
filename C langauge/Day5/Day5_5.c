#include<stdio.h> 
/*
    calculate area and circumf or circle 
    // PI -> 3.1412
    // area  = PI * r * r 
    // circum = 2 * PI * r 
*/
/*
    Compiler error --> syntax error

    Logical error / bug : Wrong programming , formula...
  Find the mistake , repair it , save ,compile , run   

    Runtime Error--> recursion 
*/

int main()
{
    float radius,area,circumference;// variable decln  

    // 1. INPUT
    // I/P the radius --> scanf(); 
       printf("Enter the radius ");
       scanf("%f",&radius); // 1.2  

    // 2.Processing the logic 
       area = 3.1412 * radius * radius; 
       
       circumference = 2 * 3.1412 * radius;

    // 3.Output 
        printf("Area = %f\n",area);
        printf("Circuference = %f\n",circumference);             




    return 0; 
}