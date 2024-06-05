#include<stdio.h> 

int main()
{
    int num = 15; 
    int *ptr = &num; 
     
    printf("&num=%u\n",&num); 
    printf("num = %d\n",num); // 15
    printf("*ptr=%d\n",*ptr); // 15
    printf("ptr=%u\n",ptr); // address of num    
    // pointer arithmatic 
    ptr = ptr + 1; 
    //    100 + 1
    //    100 + 1 * 4 ( int* --> 4 bytes )
    //    100 + 4 
    //    104 

    printf("\n\n"); 
    printf("ptr=%u\n",ptr);  
    
    ptr = ptr - 1; 
    /*
        ptr + n  
        ptr + 1 * 4  
        ptr + n * scale factor of ptr
    */
    //ptr = 104 
    //    104 - 1 
    //    104 - 1 * 4 
    //    104 - 4 
    //    100  

    printf("ptr=%u\n",ptr);    
    printf("*ptr=%u\n",*ptr);  

    return 0; 
}
/*
        1000m + 1km

        1km --> 1000m 

        1000 + 1000 ==> 2000  

*/
/*  
        double *ptr 
        ptr++; // ptr is a pointer  

*/
/*
        char num = 'A'; 
        char *ptr; 
        ptr = &num; 

   


*/