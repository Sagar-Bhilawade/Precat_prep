#include<stdio.h> 

int main()
{
    int num  = 10;// variable init 

    printf("num = %d\n",num);
    // num --> state of num 
    printf("num = %u\n",&num);// 6422300 
    // &num ==> address of num 
    // %u --> unsigned 
    // addresses --> positive ( unsigned )  

    
    return 0; 
}