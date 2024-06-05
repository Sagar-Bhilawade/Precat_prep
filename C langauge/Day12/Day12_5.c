#include<stdio.h> 
// static 
// created when program is started==> even before main () is called 
    // created in datasectin ==> default value is 0 
    // life ==> program 
    // scope ==>program  
int main()
{
    int num = 100; // local variable 
    static int num2 = 200; // static variable     
    printf("%d",num2); // 200 
}

void fun()
{
    int num3; 
    static int num2 = 300;    
    printf("%d",num2); 
}