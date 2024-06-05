#include<stdio.h> 
int main()
{

   // printf("%d\n",10&5);  // Bitwise AND 
   //printf("%d\n",10|5);// Bitwise OR       
   //printf("%d\n",10^5);// Bitwise OR        
    
     int num = 10;
     printf("%d",~num);  // -11 
     // ~ --> -(n+1) --> -(10 + 1) --> -11 
     
     /*
            ~ --> Bitwise not 
          1. Bitwise 
            Decimal ( 10) --> binary 

            10 --> 0000 1010 ( binary of 10)

            ~ --> Bitwise not ( 0 -->1 , 1 --> 0)
                  Inverting the bits 

                0000 1010
                ~
                1111 0101 --> O/p ( bitwise ~ ) 
                msb --> 1 ( negative )

                 1111 0101 
                   2s compliment 

              1s compliment --> 0000 1010 

              2s Compliment --> 0000 1010
                                        1
                               ------------
                                0000 1011 
                                ( 11 )   --> -11                      








     */









    return 0;
}
