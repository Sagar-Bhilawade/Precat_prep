#include<stdio.h> 

int main()
{
    int num1 = 50; 
    int num2 = 70; 
    int *ptr = &num1; 
    // here ptr init stored the address of num1 
    printf("num1 = %d\n",num1);// 50 
    printf("*ptr = %d\n",*ptr);// 50   

    ptr = &num2; 

    // now ptr is storing the address of num2( updated )
    printf("num1 = %d\n",num2);// 70
    printf("*ptr = %d\n",*ptr);// 70   

    
    

    return 0; 
}
