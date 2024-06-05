#include<stdio.h> 

int main()
{
    //unsigned char ch = 500; // 0 to 255 
    /*
        char --> 1 byte 
        1 byte --> 8 bits 
        2 to the power 8 --> 256 

        500 - 256 --> 244 

    */ 
   // printf("%d",ch); 
    
    unsigned char ch = 900; 
    /*
            900 - 256 --> 644 
            644 - 256 --> 388 
            388 - 256 --> 132 
    */
    printf("%d",ch); 
    return 0; 
}