#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; // ref 

    // pointer to pointer 

    int **pptr = &ptr; 

    printf("num = %d\n",num); //10
    printf("*ptr=%d\n",*ptr); //10 // dereferencing

    printf("**pptr=%d",**pptr); 
    /*
                **pptr

                valueat(valueat(pptr))
                valueat(valueat(500))
                valueat(100)
                10 
    */







}