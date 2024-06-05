#include<stdio.h> 
#include<limits.h> 

int main()
{
    short int num; 

    printf("%d",sizeof(num));  //2 byte 
    // 2 byte --> 16 
    /*          
            signed 

            (2 to the power 16-1) - 1 
             (2 to the power 15 ) - 1 
             32767 
    */


    printf("%d\n",SHRT_MAX ); // 32767 
    printf("%d\n",SHRT_MIN ); //-32768 

    printf("%u",USHRT_MAX); //65535   
    // unsigned short int 
    // no sign bit 

}
/*
        if my requirement is to store 10

        int num 
        unsigned int num 
        short int num --> %hd 



*/