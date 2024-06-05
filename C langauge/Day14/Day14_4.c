#include<stdio.h> 

int main()
{
    int num = 10; 
    int *ptr = &num; // referencing 
    int **pptr = &ptr; 

    printf("&num=%u\n",&num);
    printf("ptr=%u\n",ptr);   
    printf("*pptr =%u\n",*pptr);
    // *pptr --> state of ptr 
    // state of ptr --> address of num   

    /*
            *pptr

            valueat(pptr)
            valueat(500)
            100  

    */


}