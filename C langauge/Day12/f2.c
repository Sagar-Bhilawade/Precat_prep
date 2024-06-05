#include<stdio.h> 

void fun2()
{
    extern int num1;  
    int num3 = 0; 
    num1++; 
    printf("Inside the fun1 num1:%d num3:%d\n",num1,num3); 
}