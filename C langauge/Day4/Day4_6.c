#include<stdio.h> 
#include<limits.h> 

int main()
{
    // char ch=129; // by default it is signed 
    // //signed char ch; 
    // // range --> signed char 

    // // max and min of signed char 
    // printf("%d\n",CHAR_MAX); //127 
    // printf("%d\n",CHAR_MIN); //-128 

    // printf("%d\n",ch); //127 


      unsigned char ch=255;
      printf("%u\n",ch); // 255   
      printf("%u\n",UCHAR_MAX); 
      // MAX value of Unsigned char --> 255 
      // MIN --> 0   






    return 0; 
}
// 127 -128 -127 -126 ....0 .. 50 ....127 -128 
// 500 