#include<stdio.h> 

int main()
{
    // int  ==> 4
    // float ==> 4
    // char ==> 1 
    // double ==> 8 

    int *ptr ;
    char *cptr; 
    float *fptr; 
    double *dptr; 

    printf("%d %d %d %d",sizeof(ptr),sizeof(cptr),sizeof(fptr),sizeof(dptr));
   




    return 0; 
}