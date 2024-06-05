#include<stdio.h> 
int main()
{

     int num = 10;   
    // pointer 
    // pointer --> pointer is variable which holds the address 
    // pointer is variable ( address )
    
    // i want to store the address of num 
    // num --> int 
    // pointer --> int 

    int *ptr; // pointer declaration 
    // ptr is a pointer 
    // ptr is a pointer to integer
    // ptr can hold the address of int variable        
    //  i need to store the address of num 
    // num --> int 
    // pointer --> int 

     ptr = &num; // referencing operation   
     // ptr is holding the address of int num  

    printf("num = %d\n",num); // 10; 
    printf("&num = %u\n",&num); // add of num;
    printf("&ptr = %u\n",&ptr); // add of pointer pt;
    printf("ptr = %u\n",ptr);// state of ptr 
    // state of pte = address of int num  




    return 0;
}
