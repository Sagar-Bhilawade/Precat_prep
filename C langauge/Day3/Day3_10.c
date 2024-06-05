#include<stdio.h> 

int main()
{
    int num = 100 ; 
    // 4 bytes space is getting reserved in memory 
    // inside that 4 bytes 100 is getting stored
    // binary of 100 is getting stored in 4 bytes --> 32 bits  


    char ch = 'A'; 
    //1 bytes space is getting reserved in memory 
    
    double d1 = 10.33; 
    //8 bytes space is getting reserved in memory 
    
    // sizeof( ) --> sizeof operator returns size in bytes 
    // sizeof( ) --> operator 

    printf("%d\n",sizeof(num)); // 4 bytes 
    // 4 bytes --> 32 bits 

    printf("%d\n",sizeof(ch)); // 1 bytes 
    // 1 bytes --> 8 bits  

    printf("%d\n",sizeof(d1)); // 8 bytes 
    // 8 bytes --> 64 bits 
    
    return 0; 
}
// Number system 

// binary to decimal 

// Hexadecimal Octal binary 
// 1s compliment 
// 2s compliment 