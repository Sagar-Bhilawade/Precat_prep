#include<stdio.h> 

int main()
{
    int num; 
    char ch; 
    double d1;
    short int s1; 

  // sizeof is evaluated at compile time   

   printf("%d\n",sizeof(num+ch+d1));//8 
   // 8 bytes   
   printf("%d\n",sizeof(num+ch));//4 

   printf("%d\n",sizeof(num+d1));//8

   printf("%d\n",sizeof(10+2)); //4 

   printf("%d\n",sizeof(12.33+'A'));//8 

   printf("%d\n",sizeof(12.33f+'A'));//4 

   printf("%d\n",sizeof(s1+ch));  //4 
            // short + char --> int  

    return 0; 
}