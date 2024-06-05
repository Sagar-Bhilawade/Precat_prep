#include<stdio.h> 
#include<limits.h> 
int main()
{
    // int num=2147483647;  
    // printf("%d\n",num); 
    // printf("%d\n",INT_MAX); //2147483647
    // printf("%d\n",INT_MIN);// -2147483648

    /*
          int --> 4 byte 
          32 bit  ( 1 bit sign)
          (2 to the power 32 -1) - 1 
          ( 2 to the power 31 ) - 1 
          2147483647
 

    */


    //   int num = 10; 
    //   // num is storing positive value 
    //   printf("%d",num); //10 
    //   // it is printing positive value 10 


    
      //int num = -10; 
      // num is storing negative value 
      //printf("%d",num); //-10 
      // it is printing negative value -10 

    /*
            int num;

        int  has capability of storing +ve as
        well as -ve value 

        int --> storing signed value 

        int num // signed and unsigned 

        signed --> -ve 
        unsigned --> +ve 

    */ 

     //int num;  // by default it is signed 
    //signed int num; 
    // same 


    return 0; 
}

// 0 1 ...... 100 

// 101 --> 0 
// 102 --> 1 
// 103 --> 2 