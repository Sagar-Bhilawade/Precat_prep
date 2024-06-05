#include<stdio.h> 
#include<limits.h> 

int main()
{
    // unsigned int num; // comp store +ve value  
    // num = 100;
    // printf("%u",num);

      //printf("%d\n",INT_MAX); //2147483647
      // max value of signed int
      //printf("%d\n",INT_MIN);//-2147483648
      // min value of signed int


        unsigned int num= 4294967295; 
        printf("%u\n",num);
        printf("%u",UINT_MAX);//4294967295 
        //max range of unsigned integer
        // min -> 0
        // 0 to  4294967295 


    return 0; 
}

// 0  ....... 100 
// 101 --> 0 
// 102 --> 1 
// 103 --> 2 

//300 