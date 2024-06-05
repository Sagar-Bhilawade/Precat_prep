#include<stdio.h> 

int main()
{
    // Greatest of 2 numbers 
    // 10 20 --> I/p 
    // 10 --> num1
    // 20 --> num2 
    // ( > )
    int num1,num2; 
    printf("Enter the num1 ");
    scanf("%d",&num1); 
    
    printf("Enter the num2 ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("Num1 is greatest %d",num1); 
    else
        printf("Num2 is greatest %d",num2); 
    
    


    return 0; 
}