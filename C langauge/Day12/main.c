#include<stdio.h> 

void fun1(); 
void fun2(); 

int num1; // num1 ==> global variable  , data section , default 0 
// scope --> program 

int num2;// data section , default 0 , file scope   


int main()
{
    printf("Inside the main : num1=%d num2=%d\n",num1,num2);// 0 0 
    fun1(); 
    fun2(); 
    printf("Bye main\n");
    return 0; 
}
/*
        MAKE FILE 
*/