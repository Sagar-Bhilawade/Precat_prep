#include<stdio.h> 
#include<stdlib.h> 

int main()
{
    // void *malloc(size_t size); 

    //malloc will return me the address 

    float *ptr;
    
    ptr = (float*)malloc(sizeof(float));
    //request to the memory   

    if(ptr==NULL)
    {
       printf("Unable to allocate memory\n");
       return 0; 
    } 

    *ptr = 30.25;

    printf("The value within the block %f",*ptr);  

    free(ptr); // To avoid memory leakage 

    ptr = NULL; // To avoid dangling pointer 

}