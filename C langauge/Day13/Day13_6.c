#include<stdio.h> 
int main()
{
    int num = 10;
    int *ptr = &num; // referencing oper  ( & )
     
    printf("num = %d",num); // 10 

    // to read the value of num through ptr 
    // dereferencing operation is performed 
    // dereferncing oper ( * ) --> read 
    // * --> value at operator 
    // * --> indirection operator.
    printf("*ptr = %d",*ptr); // 10 

    /*
            *ptr 

            valueat(ptr)
            valueat(100)
            10 



    */






    return 0;
}
