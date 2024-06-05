#include<stdio.h> 
#include<stdlib.h> 

int main()
{   
    // void*malloc(size_t size); 
    // void* calloc(size_t n,size_t size); 

    int *ptr;

    ptr = (int*)calloc(3,sizeof(int));  
    if(ptr==NULL)
    {
       printf("Unable to allocate memory\n");
       return 0; 
    } 
    int i; 
    for(i=0;i<=2;i++)
        *(ptr+i) = 10 * (i+1); 

     for(i=0;i<=2;i++)
        printf("%d\n",*(ptr+i)); 

    free(ptr); // TO avoid memory leakage 

    ptr = NULL; // TO avoid dangling pointer 
    return 0; 
}