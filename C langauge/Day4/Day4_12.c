#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    float fvar; 
    short int num1; 
    long int num2; 
    long long int num3; 
    double d1; 

    // printf("int = %d\n",sizeof(num)); // 4
    // printf("char = %d\n",sizeof(ch)); // 1
    // printf("float = %d\n",sizeof(fvar)); // 4
    // printf("double = %d\n",sizeof(d1)); // 8
    // printf("short int = %d\n",sizeof(num1)); //2
    // printf("long int = %d\n",sizeof(num2)); 
    // printf("long long int = %d\n",sizeof(num3)); // 8


    // printf("%d\n",sizeof(65));  //4 
    // printf("%d\n",sizeof('A')); //4 
    // // A --> 65 --> int --> 4 byte 
    // printf("%d",sizeof(12.33)); // 8 
    // // 12.33 --> double --> 8 bytes 
    // printf("%d",sizeof(12.33f)); //4
    // // 12.33 --> double 
    // // 12.33f --> float  


     printf("%d\n",sizeof(12L)); // 4 
     printf("%d\n",sizeof(12LL));// 8 
     printf("%d\n",sizeof(12l)); // 4 
     printf("%d\n",sizeof(12u)); // 4
     printf("%d\n",sizeof(12U)); // 4      


     printf("%d",0x23);    






}