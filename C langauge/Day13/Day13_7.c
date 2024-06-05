#include<stdio.h> 
int main()
{
    int num = 10;
    int *ptr = &num; // referencing oper  ( & )
     
    printf("\nInitial value "); 
    printf("num = %d\n",num); // 10 
    printf("*ptr = %d\n",*ptr); // 10 
   
    *ptr = 1000; 
    // * --> dereferencing opr 

    /*
            *ptr 
            valueat(ptr)
            valueat(100)

             valueat(100) = 1000
       through pointer i have updated the value of num       


    */
   printf("\nAfter first update");
    printf("\nnum = %d",num); // 1000 
    printf("\n*ptr = %d",*ptr);// 1000 


    *ptr = 3; 

    /*
            *ptr 
            valueat(ptr)
            valueat(100) = 3 

    */  
    printf("\nAfter second update ");
    printf("\nnum = %d",num); // 3
    printf("\n*ptr = %d",*ptr);// 3



    return 0;
}
