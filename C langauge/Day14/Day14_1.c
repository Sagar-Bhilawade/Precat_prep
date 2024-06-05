#include<stdio.h> 

int main()
{
    int num = 10;
    int *ptr = &num; // referencing 

    // pointer to pointer 

    int **pptr = &ptr;
    //pptr is a pointer which is storing the 
    // address of a pointer to a integer 

    // int ***ppptr = &pptr ;  

    printf("num = %d\n",num); // 10   
    printf("&ptr = %u\n",&ptr); // address of ptr 
    printf("ptr=%u\n",ptr);
    printf("&pptr=%u\n",&pptr);
    printf("pptr=%u\n",pptr);//address of ptr      

    return 0; 
}